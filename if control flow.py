number = 23

running = True 
while running:
    guess = int(input('Enter your lucky numer'))   
    if number == guess:
        print('Yes!You\'re a lucky boy!')
        running = False
    elif number > guess:
        print('You\'re a little smaller', end=' ')
        print('Try again!')
    else:
        print('You\'re a little bigger', end=' ')
        print('Try again!')
