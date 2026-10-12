#include <iostream>

int get_item_score(int code)
{
    switch(code){
        case 1 : 50;
        case 2 : 30;
        case 3 : 20;
        case 4 : 10;
        case 5 : 100;
        case 6 : -50;
        case 7 : 5;
        case 8 : -10;
        default : return -10;
    }
}
int main()
{
int n, item_code;
int total_score = 0;
std::cin >> n ;
for (int i = 0; i < n; i++)
{
std::cin >> item_code ;
total_score += get_item_score(item_code);
}
std::cout << total_score << '\n';
return 0;
}