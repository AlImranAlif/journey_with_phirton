#include <bits/stdc++.h>
using namespace std;

using StateSet = set<int>;
using TransitionTable = map<pair<int, char>, vector<int>>;

TransitionTable nfa;
map<int, vector<int>> epsilon;
set<int> final_nfa_states = {10};
set<int> epsilon_closure(const set<int>& states) {
    stack<int> stk;
    set<int> closure = states;
    for (int state : states) stk.push(state);

    while (!stk.empty()) {
        int s = stk.top(); stk.pop();
        for (int next : epsilon[s]) {
            if (closure.insert(next).second) {
                stk.push(next);
            }
        }
    }
    return closure;
}
set<int> move(const set<int>& states, char symbol) {
    set<int> result;
    for (int s : states) {
        if (nfa.count({s, symbol})) {
            for (int next : nfa[{s, symbol}])
                result.insert(next);
        }
    }
    return result;
}

int main() {
    
    epsilon[0] = {1};
    epsilon[1] = {2, 4};
    nfa[{2, 'a'}] = {3};
    epsilon[3] = {7};
    nfa[{4, 'b'}] = {5};
    epsilon[5] = {7};
    epsilon[7] = {1, 6};
    nfa[{6, 'a'}] = {8};
    nfa[{8, 'b'}] = {9};
    nfa[{9, 'b'}] = {10};

    map<StateSet, char> state_labels;
    map<char, StateSet> label_states;
    map<char, map<char, char>> dfa;

    queue<StateSet> q;
    char label = 'A';

    StateSet start = epsilon_closure({0});
    state_labels[start] = label;
    label_states[label] = start;
    q.push(start);
    label++;

    while (!q.empty()) {
        StateSet current = q.front(); q.pop();
        char curr_label = state_labels[current];

        for (char symbol : {'a', 'b'}) {
            StateSet m = move(current, symbol);
            StateSet next = epsilon_closure(m);

            if (next.empty()) continue;

            if (state_labels.find(next) == state_labels.end()) {
                state_labels[next] = label;
                label_states[label] = next;
                q.push(next);
                label++;
            }
            dfa[curr_label][symbol] = state_labels[next];
        }
    }

    cout << "DFA Transition Table for (a|b)*abb\n";
    cout << "State\t|\ta\tb\n";
    cout << "-------------------------\n";
    for (auto& state : dfa) {
        cout << "  " << state.first << "\t|\t";
        cout << (state.second.count('a') ? string(1, state.second['a']) : "-") << "\t";
        cout << (state.second.count('b') ? string(1, state.second['b']) : "-") << "\n";
    }

   
    cout << "\nState Representations:\n";
    for (auto& [sset, lbl] : state_labels) {
        cout << lbl << " = { ";
        for (int s : sset) cout << s << " ";
        cout << "}\n";
    }

    return 0;
}
