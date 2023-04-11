//std
#include <iostream>
#include <string>


std::string userGet(bool x, std::string playerX, std::string playerO) 
{

    std::string target{};

    if (x) 
    {
        std::cout << playerX << " your turn:";
        std::cin >> target; 
        x ={false};
    } 
    else
    {
        std::cout << playerO << " your turn:";
        std::cin >> target; 
        x ={true};
    }

    return target;
}

int main() 
{
    //get player names
    std::string playerX{};
    std::string playerO{};
    std::string winner{};

    std::cout << "Player X name: ";
    std::cin >> playerX;

    std::cout << "\n" << "Player O name: ";
    std::cin >> playerO;




    bool x{true};
    std::string a1{"*"}, a2{"*"}, a3{"*"}, b1{"*"}, b2{"*"}, b3{"*"}, c1{"*"}, c2{"*"}, c3{"*"}; 

    std::cout <<"\n"<<"Board type:"<<"\n"<<" 1"<<"2"<<"3"<<"\n"<<"a"<<a1<<a2<<a3<<"\n"<<"b"<<b1<<b2<<b3<<"\n"<<"c"<<c1<<c2<<c3<<"\n"<<"\n";

    bool win{false};

   while (!win)
    {  
     std::string targetr = {userGet(x, playerX, playerO)};

  
    

    if (targetr == "a1") 
    {
        if (x) 
        {
           if (a1 == "*")
           {
            a1 = {"X"};
            x = false;
           }

        }
        if (targetr == "a1") 
        {
           if (a1 == "*")
           {
            a1 = {"O"};
            x = true;
           }
        }
    }

    if (targetr == "a2") 
    {
        if (x) 
        {
           if (a2 == "*")
           {
            a2 = {"X"};
            x = false;
           }

        }
        if (targetr == "a2") 
        {
           if (a2 == "*")
           {
            a2 = {"O"};
            x = true;
           }
        }
    }

    if (targetr == "a3") 
    {
        if (x) 
        {
           if (a3 == "*")
           {
            a3 = {"X"};
            x = false;
           }

        }
        if (targetr == "a3") 
        {
           if (a3 == "*")
           {
            a3 = {"O"};
            x = true;
           }
        }
    }

    if (targetr == "b1") 
    {
        if (x) 
        {
           if (b1 == "*")
           {
            b1 = {"X"};
            x = false;
           }

        }
        if (targetr == "b1") 
        {
           if (b1 == "*")
           {
            b1 = {"O"};
            x = true;
           }
        }
    }

    if (targetr == "b2") 
    {
        if (x) 
        {
           if (b2 == "*")
           {
            b2 = {"X"};
            x = false;
           }

        }
        if (targetr == "b2") 
        {
           if (b2 == "*")
           {
            b2 = {"O"};
            x = true;
           }
        }
    }

    if (targetr == "b3") 
    {
        if (x) 
        {
           if (b3 == "*")
           {
            b3 = {"X"};
            x = false;
           }

        }
        if (targetr == "b3") 
        {
           if (b3 == "*")
           {
            b3 = {"O"};
            x = true;
           }
        }
    }

    if (targetr == "c1") 
    {
        if (x) 
        {
           if (c1 == "*")
           {
            c1 = {"X"};
            x = false;
           }

        }
        if (targetr == "c1") 
        {
           if (c1 == "*")
           {
            c1 = {"O"};
            x = true;
           }
        }
    }

    if (targetr == "c2") 
    {
        if (x) 
        {
           if (c2 == "*")
           {
            c2 = {"X"};
            x = false;
           }

        }
        if (targetr == "c2") 
        {
           if (c2 == "*")
           {
            c2 = {"O"};
            x = true;
           }
        }
    }

    if (targetr == "c3") 
    {
        if (x) 
        {
           if (c3 == "*")
           {
            c3 = {"X"};
            x = false;
           }

        }
        if (targetr == "c3") 
        {
           if (c3 == "*")
           {
            c3 = {"O"};
            x = true;
           }
        }
    }

    std::cout <<"\n"<<a1<<a2<<a3<<"\n"<<b1<<b2<<b3<<"\n"<<c1<<c2<<c3<<"\n"<<"\n";


    if ((a1 == "X") && (a2 == "X") && (a3 == "X") || (a1 == "O") && (a2 == "O") && (a3 == "O"))
    {
        win = true;
        if (x)
        {
            winner = playerO;
        }
        else
        {
            winner = playerX;
        }
    }
    if ((b1 == "X") && (b2 == "X") && (b3 == "X") || (b1 == "O") && (b2 == "O") && (b3 == "O"))
    {
        win = true;
        if (x)
        {
            winner = playerO;
        }
        else
        {
            winner = playerX;
        }
    }
    if ((c1 == "X") && (c2 == "X") && (c3 == "X") || (c1 == "O") && (c2 == "O") && (c3 == "O"))
    {
        win = true;
        if (x)
        {
            winner = playerO;
        }
        else
        {
            winner = playerX;
        }
    }
        if ((a1 == "X") && (b1 == "X") && (c1 == "X") || (a1 == "O") && (b1 == "O") && (c1 == "O"))
    {
        win = true;
        if (x)
        {
            winner = playerO;
        }
        else
        {
            winner = playerX;
        }
    }
    if ((a2 == "X") && (b2 == "X") && (c2 == "X") || (a2 == "O") && (b2 == "O") && (c2 == "O"))
    {
        win = true;
        if (x)
        {
            winner = playerO;
        }
        else
        {
            winner = playerX;
        }
    }
    if ((a3 == "X") && (b3 == "X") && (c3 == "X") || (a3 == "O") && (b3 == "O") && (c3 == "O"))
    {
        win = true;
        if (x)
        {
            winner = playerO;
        }
        else
        {
            winner = playerX;
        }
    }
    if ((a1 == "X") && (b2 == "X") && (c3 == "X") || (a1 == "O") && (b2 == "O") && (c3 == "O"))
    {
        win = true;
        if (x)
        {
            winner = playerO;
        }
        else
        {
            winner = playerX;
        }
    }
    if ((a3 == "X") && (b2 == "X") && (c1 == "X") || (a3 == "O") && (b2 == "O") && (c1 == "O"))
    {
        win = true;
        if (x)
        {
            winner = playerO;
        }
        else
        {
            winner = playerX;
        }
    }

    if ((a1!= "*") && (b1!= "*") && (c1!= "*") &&(a2!= "*") && (b2!= "*") && (c2!= "*") && (a3!= "*") && (b3!= "*") && (c3 != "*"))
    {
        win = true;
        winner = "no one!";
    }

    }  

    std::cout <<"\n"<<"\n"<<"The winner is : "<<winner<<"\n";

    return 0;
}


