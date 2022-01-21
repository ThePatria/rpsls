#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iterator>
using namespace std;
// Rock > Scissor & Lizard
// Paper > Rock & Spock
// Lizard > Paper & Spock
// Spock > Scissor & Rock
// Scissor > Paper & Lizard
int main(){
    srand(time(0));
    int a = rand()%5;
    string opt, bot; bool check;
    string rpc[5] = {"rock", "paper", "scissor","spock", "lizard"};

    cout << "Choose(Rock/Paper/Scissor/Spock/Lizard): ";
    getline(cin, opt);
    cout << endl;

    for_each(opt.begin(), opt.end(), [](char &tes){
        tes = ::tolower(tes);
    });

    check = find(begin(rpc), end(rpc), opt) != end(rpc);

    if(check){
        bot = rpc[a];

        if(opt == bot)
            cout << "Draw!" << endl;
        else if(bot == rpc[0]){
            if(opt == rpc[2] || opt == rpc[4])
                cout << "Lose!" << endl;
            else
                cout << "Win!" << endl;
        }
        else if (bot == rpc[1])
        {
            if (opt == rpc[0] || opt == rpc[3])
                cout << "Lose!" << endl;
            else
                cout << "Win!" << endl;
        }
        else if (bot == rpc[2])
        {
            if (opt == rpc[1] || opt == rpc[4])
                cout << "Lose!" << endl;
            else
                cout << "Win!" << endl;
        }
        else if (bot == rpc[3])
        {
            if (opt == rpc[0] || opt == rpc[2])
                cout << "Lose!" << endl;
            else
                cout << "Win!" << endl;
        }
        else if (bot == rpc[4])
        {
            if (opt == rpc[1] || opt == rpc[3])
                cout << "Lose!" << endl;
            else
                cout << "Win!" << endl;
        }
    }
    else{
        cout << "Invalid input, so you lose!" << endl;
        opt = "Walk-Out";
        bot = "Auto-Win";
    }

    cout << "\nYou: " << opt << "\nBot: " << bot << endl;

    return 0;
}
