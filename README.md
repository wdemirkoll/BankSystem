# Bank System

Short Description 💬
-----------------
Console simple bank system — a small, console-based card account management application implemented in C++. It provides a simple interactive menu for depositing money from a one-time gifted cash balance into either a credit card or a bank card, withdrawing from those cards back to cash, and tracking balances and the total number of successful transactions. The program is a lightweight demonstration of basic I/O, control flow, and simple state management in C++.

Announcement 📢
------------
This project is written using C++17.

Features ✅
--------
- One-time starting cash gift ($1000) to the user 🎁  
- Deposit money from cash to Credit Card ➕ (floating point amounts allowed)  
- Deposit money from cash to Bank Card ➕ (floating point amounts allowed)  
- Withdraw money from Credit Card back to cash ➖  
- Withdraw money from Bank Card back to cash ➖  
- Tracks and displays: Name, Bank Name, Cash balance, Credit Card balance, Bank Card balance, Total successful transactions 🧾  
- Simple checks: prevents deposits/withdrawals when funds are insufficient and disallows non-positive amounts ⚠️

Example usage / sample session 💡
------------------------------
Below is an example interaction with the program (user input shown after prompts):

```text
Enter your name, John Doe
Enter your bank name, ExampleBank
I'm giving you $1000 cash as a gift for trying my project :)

-------------------------------------
Name, John Doe
Bank Name, ExampleBank
Cash $1000
Credit Card Balance $0
Bank Card Balance $0
Total Transaction Number: 0
-------------------------------------

[1] - Deposit money to card
[2] - Withdraw money from card
[3] - Exit
Choose: 1
[1] - Depositing money into a credit card
[2] - Depositing money into a bank card
Choose: 1
Enter amount: $250

-------------------------------------
Name, John Doe
Bank Name, ExampleBank
Cash $750
Credit Card Balance $250
Bank Card Balance $0
Total Transaction Number: 1
-------------------------------------

[1] - Deposit money to card
[2] - Withdraw money from card
[3] - Exit
Choose: 2
[1] - Withdraw money from credit card
[2] - Withdraw money from bank card
Choose: 1
Enter amount: $100

-------------------------------------
Name, John Doe
Bank Name, ExampleBank
Cash $850
Credit Card Balance $150
Bank Card Balance $0
Total Transaction Number: 2
-------------------------------------

[1] - Deposit money to card
[2] - Withdraw money from card
[3] - Exit
Choose: 3
```

Notes and limitations ⚠️
---------------------
- The current implementation uses global variables and basic input handling. Non-numeric or malformed input may break the program.  
- All monetary operations require the amount to be > 0. Deposits and withdrawals fail when the source balance is insufficient.  
- The program is single-user and does not persist state across runs.  
- Consider adding robust input validation (std::cin checks or parsing from getline), multiple user support, and save/load persistence for extended functionality.

Author 👤
------
wdemirkoll — GitHub: @wdemirkoll

📅 January 2026
