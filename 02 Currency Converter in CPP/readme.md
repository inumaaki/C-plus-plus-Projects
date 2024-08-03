# Currency Converter Program in C++

![C-plus-plus-Projects](https://socialify.git.ci/evilurl/C-plus-plus-Projects/image?forks=1&issues=1&language=1&name=1&owner=1&pattern=Circuit%20Board&pulls=1&stargazers=1&theme=Dark)

## Overview

The Currency Converter Program is a simple and user-friendly application written in C++ that allows users to convert amounts between different currencies. The program supports multiple currency pairs and offers the functionality to update exchange rates dynamically.

## Features

- Convert between various currency pairs including:
  - USD to PKR and PKR to USD
  - USD to INR and INR to USD
  - USD to GBP and GBP to USD
  - USD to RUB and RUB to USD
  - USD to CNY and CNY to USD
- Update exchange rates manually
- Clear screen for better readability
- Help menu to guide users
- Custom exchange rate conversion

## Usage

### Main Menu Options

- **Press '1'**: Convert USD to PKR
- **Press '2'**: Convert PKR to USD
- **Press '3'**: Convert USD to INR
- **Press '4'**: Convert INR to USD
- **Press '5'**: Convert USD to GBP
- **Press '6'**: Convert GBP to USD
- **Press '7'**: Convert USD to RUB
- **Press '8'**: Convert RUB to USD
- **Press '9'**: Convert USD to CNY
- **Press '0'**: Convert CNY to USD
- **Press 'C/c'**: Custom exchange rate conversion
- **Press 'A/a'**: List available exchanges
- **Press 'H/h'**: Help menu
- **Press 'X/x'**: Clear screen
- **Press 'E/e'**: Exit program

### Example Usage

1. Run the program.
2. Select the desired conversion option from the main menu by entering the corresponding number.
3. Follow the prompts to enter the amount and update the exchange rate if needed.
4. The converted amount will be displayed.

### Custom Exchange Rate Conversion

To use a custom exchange rate:

1. Select the 'C/c' option from the main menu.
2. Enter the source and target currencies.
3. Input the custom exchange rate.
4. Enter the amount to be converted.
5. The program will display the converted amount using the custom rate.

## Installation

1. Ensure you have a C++ compiler installed on your system (e.g., GCC).
2. Download the `currencyConverter.cpp` file to your local machine.
3. Open a terminal or command prompt.
4. Navigate to the directory where the `currencyConverter.cpp` file is located.
5. Compile the program using the following command:
   ```bash
   g++ -o currencyConverter currencyConverter.cpp
   ```
6. Run the compiled program:
   ```bash
   ./currencyConverter
   ```

## Contributing

Contributions are welcome! Feel free to submit a pull request or open an issue if you have any suggestions or improvements.
