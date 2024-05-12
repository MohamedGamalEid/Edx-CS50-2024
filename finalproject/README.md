 # ATM Simulator for CS50x 2024 Final Project
 #### Video Demo:  <https://youtu.be/zN_mMDynCx4>



## Overview
Welcome to the ATM Simulator, a final project submission for CS50x 2024. This program is a simulation of an Automated Teller Machine (ATM) that allows users to interact with a banking system for transactions such as withdrawals and deposits. The project is designed to emulate real-world financial operations and provide an educational tool for those interested in learning about banking software systems.

## Introduction
The ATM Simulator is a command-line application written in C, a powerful programming language that provides a solid foundation for understanding computer science fundamentals. This project aims to solve the problem of understanding how ATMs work from a software perspective. It is intended for educational purposes, allowing users to explore the functionalities of an ATM without the need for physical hardware.

## Features
- **User Authentication**: Secure access is ensured through password protection, allowing only authorized users to perform transactions.
- **Deposit Functionality**: Operators can deposit money into the ATM, which is then available for customer withdrawals.
- **Withdrawal Functionality**: Customers can withdraw money in various denominations, provided they have the correct password and there are sufficient funds in the machine.
- **Balance Inquiry**: After each transaction, the ATM displays the remaining balance, giving users a clear view of the available funds.

## Technical Details
The program operates in an infinite loop, continuously offering services until the user decides to exit. It utilizes standard input/output functions from the `stdio.h` library to interact with the user. The `stdlib.h` library is included to provide access to functions for memory allocation, process control, conversions, and others, although its functionality is not directly used in the current version of the program.

## How It Works
Upon starting the program, users are greeted with a welcome message and options to either withdraw or deposit money. The deposit feature is password-protected and intended for operator use. Once the correct password is entered, the operator can input the amount of money in denominations of 200LE, 100LE, and 50LE. The program then updates the total available balance.

For withdrawals, customers are prompted to enter their password. If authenticated, they can enter the amount they wish to withdraw. The program calculates the number of notes in each denomination to fulfill the request while updating the machine's balance.

## Challenges and Learning Outcomes
Developing this ATM Simulator posed several challenges, including implementing authentication, ensuring accurate balance tracking, and providing a user-friendly interface. Through overcoming these challenges, I have gained a deeper understanding of C programming, problem-solving, and the intricacies of ATM operations.

## Future Enhancements
While the current version of the ATM Simulator meets the basic requirements, future enhancements could include:
- A graphical user interface (GUI) for improved user interaction.
- Network connectivity for real-time updates and remote management.
- Enhanced security features such as encryption and multi-factor authentication.

## Final Thoughts
This project aligns with the CS50x 2024 course's goal of creating software that impacts the community and potentially changes the world. By simulating an ATM, this project provides a platform for users to learn about and engage with banking software, thereby demystifying a critical component of our financial infrastructure.

## Acknowledgements
I would like to express my gratitude to the CS50 staff and the edX community for their invaluable resources and support throughout the development of this project.

## License
This ATM Simulator is released under the MIT License, promoting open-source usage and collaboration.
