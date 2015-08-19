#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

/**< The % symbol after the rand command will take your random number and divide it by 6 and then give you the remainder. */
/**< The % symbol is used so that you can only get numbers within a certain determined set. So in this case, between 1 and 6. */

srand(time(0));

    for (int x = 0; x<20; x++) {
        cout << 1+(rand()%6) << endl; }


    return 0; }
