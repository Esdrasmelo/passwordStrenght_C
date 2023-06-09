# Password Strength Validator

This is a simple command-line application written in C that validates the strength of a password based on certain criteria.

## Requirements:
- C compiler (e.g., GCC)

## Usage:
1. Clone the repository:
   git clone https://github.com/Esdrasmelo/passwordStrenght_C.git

2. Navigate to the project directory:
   cd passwordStrenght_C

3. Compile the C program:
   gcc passwordStrenghtValidator.c -o passwordStrenghtValidator

4. Run the application:
   ./passwordStrenghtValidator

5. Follow the prompts and enter a password to validate its strength.

## Password Strength Criteria:
The application uses the following criteria to determine password strength:
- Length: The password must be at least 8 characters and at most 16 characters long.
- Complexity: The password must contain a combination of uppercase letters, lowercase letters and digits. It can't contains spaces, punctuation and accents.

### License:
This project is licensed under the MIT License.
