#include <iostream>
using namespace std;

void Tarjan(G) {
    int ca = 0;
    int cc = 0;
    for (int v) {
        expl[v] = 0;
        comp[v] = 0;
    }
    for (v) {
        if (expl[v] == 0)
            DFST(v)
    }
}
void DFST(v){
    expl[v] = ++ca;
    for <v,u>{
        if(expl[u] == 0){
            tipo[<v,u>] = T;
            DFST(u);
        }
        else if(expl[u] > expl[v])
            tipo[<v,u>] = F;
        else if(comp[u] > 0)
            tipo[<v,u>] = C;
        else [<v,u>] = B;
            comp[v] = ++cc;
    }
}




int main() {
    cout << "Hello, World!" << std;
    return 0;
}