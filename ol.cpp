#include <iostream>
int main(){
    int x,y;
    std::cin>>x;
    std::cin>>y;
    while(x!=y){
        if(x>y){
            x-=y;
        }
        else{
            y-=x;
        }
    }
    std::cout<<x;
    return 0;
}