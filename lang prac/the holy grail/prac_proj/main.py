import random # module import


MAX_LINES = 3 # global constant
MIN_BET= 1
MAX_BET= 1000

ROWS=3
COLS=3

# symbol dictionary number of each symbols in each column
SYM_COUNT= {
    "A": 2,
    "B": 4,
    "C": 6,
    "D": 8,  
}

def get_spin(rows, cols, symbols):
    all_symbols= []
    
    for symbol, SYM_COUNT in symbols.items(): # .items gives key and value associated with a dic 
        for _ in range(symbol): # _ anon variable
            all_symbols.append(symbol)
        

def deposit():
    while True:
        amount =input("Enter deposit amount: $")
        if amount.isdigit(): # always checks for strings
            #values taken through inout are always taken in as strings and type conversion if needed for proper datatypes inputs
            amount=int(amount)
            if ((amount) > 0):
                print(str(amount)+ "$ deposited")
                break # used to break the while loop
            else:
                print("enter a valid amount.")
        else:
            print("enter integer only.")
    
    return amount 


def get_lines():

    while True: 
        lines= input("Enter no of lines: ") 

        if lines.isdigit():
            lines= int(lines)
            print("Entered lines: "+ str(lines))
            
            if 1<=lines<=MAX_LINES:
                break
            else:
                    print("Enter valid values")
                    print("Lines "+MAX_LINES)
    return lines
         
def get_bet():
    while True: 
        bet= input("Amount of bet: ")
        
        if bet.isdigit():
            bet= int(bet)
            if MIN_BET <= bet <= MAX_BET:
                print("Entered bet: "+ str(bet))
                break
            else:
                    print(f"bet must but bigger than {MIN_BET} and less than {MAX_BET}")
    return bet

def main():
    balance = deposit()
    no_lines= get_lines()
    no_bet= get_bet()
    
    total= no_bet*no_lines
    
    while True:
        if balance > total:
            print(f"lines {no_lines} , bet {no_bet}")
            print(f"Total amount betted: {total}")
            break
        else:
            print("bet more than balance")
            
    
main()