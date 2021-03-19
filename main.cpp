#include <iostream>
#include <queue>
#include <vector>
#include <functional>
#include <cstdlib>
#include <time.h>

int main(){
    std::priority_queue<int> o_NumSetAsc;
    std::priority_queue<int, std::vector<int>, std::greater<int>> o_NumSetDesc;
    srand(time(NULL));
    for(int i_Ct=0; i_Ct< 5; i_Ct++){
        int i_Num = rand()% 20;
        o_NumSetAsc.push(i_Num);
        o_NumSetDesc.push(i_Num);
    }

    std::cout<< "Is empty: "<<o_NumSetAsc.empty() << "\n";
    std::cout<< "Is empty: "<<o_NumSetDesc.empty() << "\n";

    std::cout<< "Size: "<<o_NumSetAsc.size() << "\n";
    std::cout<< "Size: "<<o_NumSetDesc.size() << "\n";

    for(int i_Ct=0; i_Ct< 5; i_Ct++){
        std::cout<< o_NumSetAsc.top() << " ";
        o_NumSetAsc.pop();
    }

    std::cout<< "\n";

    for(int i_Ct=0; i_Ct< 5; i_Ct++){
        std::cout<< o_NumSetDesc.top() << " ";
        o_NumSetDesc.pop();
    }

    return 0;
}
