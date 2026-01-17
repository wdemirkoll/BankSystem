#include <iostream>
#include <string>

// User information
std::string Name;
std::string BankName;

// User balances
double Cash = 0;
double CreditCard = 0;
double BankCard = 0;

// Amount for deposit or withdrawal
double Amount;

// Counts total successful transactions
int Transaction = 0;

// Reserved variables (currently unused)
int DepositMoney;
int WithdrawMoney;

// Stores menu selection
int Choose;

// Displays user statistics and balances
void Statistics_Menu(){
    std::cout << "-------------------------------------" << std::endl;
    std::cout << "Name, " << Name << std::endl;
    std::cout << "Bank Name, " << BankName << std::endl;
    std::cout << "Cash $" << Cash << std::endl;
    std::cout << "Credit Card Balance $" << CreditCard << std::endl;
    std::cout << "Bank Card Balance $" << BankCard << std::endl;
    std::cout << "Total Transaction Number: " << Transaction << std::endl;
    std::cout << "-------------------------------------" << std::endl << std::endl;
}

// Displays main menu options
void Main_Menu(){
    std::cout << "[1] - Deposit money to card" << std::endl;
    std::cout << "[2] - Withdraw money from card" << std::endl;
    std::cout << "[3] - Exit" << std::endl;
}

// Displays deposit menu options
void Deposit_Menu(){
    std::cout << "[1] - Depositing money into a credit card" << std::endl;
    std::cout << "[2] - Depositing money into a bank card" << std::endl;
}

// Displays withdrawal menu options
void Withdraw_Menu(){
    std::cout << "[1] - Withdraw money from credit card" << std::endl;
    std::cout << "[2] - Withdraw money from bank card" << std::endl;
}

// Reads user's menu choice
void ChooseFunction(){
    std::cout << "Choose: ";
    std::cin >> Choose;
}

// Reads transaction amount from user
void AmountFunction(){
    std::cout << "Enter amount: $";
    std::cin >> Amount;
}

// Gets user information and gives starting cash
void Entry(){
    std::cout << "Enter your name, ";
    std::getline(std::cin, Name);

    std::cout << "Enter your bank name, ";
    std::getline(std::cin, BankName);

    // Gives starting cash to the user
    std::cout << "I'm giving you $1000 cash as a gift for trying my project :)\n\n";
    Cash += 1000;
}

int main(){
    // Initial user input
    Entry();

    // Main program loop
    while(true){
        Statistics_Menu();
        Main_Menu();
        ChooseFunction();

        switch(Choose){
        case 1:
            // Deposit operation
            Deposit_Menu();
            ChooseFunction();

            if (Choose == 1){
                AmountFunction();

                // Deposit money into credit card
                if (Amount <= Cash && Amount > 0){
                    Cash -= Amount;
                    CreditCard += Amount;
                    Transaction++;
                    break;
                }
                else {
                    std::cout << "Insufficient money!" << std::endl << std::endl;
                    break;
                }
            }
            else if (Choose == 2){
                     AmountFunction();

                // Deposit money into bank card
                if (Amount <= Cash && Amount > 0){
                    Cash -= Amount;
                    BankCard += Amount;
                    Transaction++;
                    break;
                }
                else {
                    std::cout << "Insufficient money!" << std::endl << std::endl;
                    break;
                }
            }
            break;

        case 2:
            // Withdraw operation
            Withdraw_Menu();
            ChooseFunction();

            if (Choose == 1){
                AmountFunction();

                // Withdraw money from credit card
                if (Amount <= CreditCard && Amount > 0){
                    Cash += Amount;
                    CreditCard -= Amount;
                    Transaction++;
                    break;
                }
                else {
                    std::cout << "Insufficient balance!" << std::endl << std::endl;
                    break;
                }
            }
            else if (Choose == 2){
                     AmountFunction();

                // Withdraw money from bank card
                if (Amount <= BankCard && Amount > 0){
                    Cash += Amount;
                    BankCard -= Amount;
                    Transaction++;
                    break;
                }
                else {
                    std::cout << "Insufficient balance!" << std::endl << std::endl;
                    break;
                }
            }
            break;

        case 3:
            // Exit the program
            return 0;

        default:
            // Handles invalid menu selections
            std::cout << "Invalid Selection!" << std::endl << std::endl;
        }
    }

    return 0;
}
