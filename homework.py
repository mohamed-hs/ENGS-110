#Welcome to the more boring version of the homework, everything here is... simpler


def getSum (num):
  s = 0 
  for i in str (num):
      s += int (i) 
  return s 

#Be catious! The legend says this is the swimming bool of the great Python, maybe he'll let you in somehow
def is_two (num):
    if num == 1:
        return True 
    while num >1:
        if num % 2 != 0:
            return False
            break
        else:
            num /= 2 
    return True

#Gru: Dr Nefario! Stop making rectangles!!!
#Nefario: *evil rectangle noises*

def draw_rectangle (n, m, c):
    #Since I can easily print lines, i decided to approch the rectangle path-wise rather than matrix wise
    # SO instead of taking each coordinate and marking it a "symbol" or " " i just print each line as is
    for i in range (n):
        if i == 0 or i == n - 1:
            print ((c + " ") * m)
        else:
            print (c + ((2*m-3) * " ") + c)
    print ()


choice = input ("Choose a fucntion from the 7 Magical Functions:\n  1 - Sum of integers\n  2 - Reversed number\n  3 - Palindrome\n  4 - Concatenate\n  5 - Is power of 2\n  6 - Draw me a rectagle\n  7 - Draw a traingle\n----> ")

match (int (choice)):
    case 1:
        num = input ("Enter your number: ")
        print (getSum (num))
    case 2:
        #In the python version of this code, since i can take the number as a string
        #I am alowed to slice it, therefore reverse it with slicing
        num = input ("Enter your number: ")
        print (num[::-1])
    case 3:
        num = input ("Enter your number: ")
        if num == num[::-1]:
            print ("Yay, a palindrome!")
        else:
            print ("No no no")
    case 4:
        # See? much simpler innit??
        s1 = input ("Enter num 1: ")
        s2 = input ("Enter num 2: ")
        print (s1 + s2)
    case 5:
        num = int (input ("Enter your number: "))
        if is_two (num): 
            print ("Yay, he is a two indeed")
        else: 
            print ("Sadly one of us is not a two, and its not me nor you")
    case 6:
        n = int (input ("Side 1: "))
        m = int (input ("Side 2: "))
        c = input ("Character: ")
        draw_rectangle (n, m, c)

    case 7:
        num = int(input("Enter your number: "))
        o = input("Select orientation: \n 1 - Right Triangle (Left) \n 2 - Right Triangle (Right) \n 3 - Isocelese \n 4 - Triangle with height N\n -----> ")
        match int(o):
            case 1:
                for i in range(num):
                    print((i+1)*"*")
            case 2:
                for i in range(num):
                    print((num-1-i)*" " + (i+1)*"*")
            case 3:
                if num % 2 != 0:
                    for i in range(num):
                        print( ((num-(i+1)//2))*" " + (i+1)*"*")
                else:
                    print("Not odd = Not isoceles :(")
            case 4:
                for i in range(1,num+1):
                    if i == 1:
                        print((num-1)*" " + "*")
                    else:
                        print((num-i)*" "+ i*"*" + (i-1)*"*")
            case _:
                print("Inavlid input")
    case _:
        print ("You have entered an invalid option!")
