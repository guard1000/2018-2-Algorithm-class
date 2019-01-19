from random import *
import winsound
import time

Music_List = []


def iter_Music(var):
    global Music_List
    for i in range(0, 5):
        #        print(Music_List)
        #        print("Count: ",i)
        #        print("val: ",var)
        if var + i >= 5:
            Ans = var + i - 4
        else:
            Ans = var + i
        sum = randint(0, 4)
        winsound.PlaySound((str(Ans * 4 - sum) + ".wav"), winsound.SND_FILENAME)
        winsound.PlaySound(None, winsound.SND_FILENAME)

        Flag = int(input("If you like Music, Typing 1\nWant to hear next, typing 0\n"))

        if Flag == 1:
            Music_List.append(Ans)
            if len(Music_List) == 3: return
            iter_Music(Ans)
            if len(Music_List) == 3: return

    Music_List.pop()
    return


iter_Music(1)

print(Music_List)
a = Music_List[0]-1
b = Music_List[1]-1
c = Music_List[2]-1

if (a == 0 and b == 0 and c == 0):
    print("당신은 힙합덕후")

elif (a == 1 and b == 1 and c == 1):
    print("당신은 락덕후")

elif (a == 2 and b == 2and c == 2):
    print("당신은 재즈덕후")

elif (a == 3 and b == 3and c == 3):
    print("당신은 edm덕후")

elif (a == 0 and b == 0 and c == 1) or (a == 0 and b == 1 and c == 1):
    print("당신은 밴드힙합덕후")

elif (a == 0 and b == 0 and c == 2) or (a == 0 and b == 2 and c == 2):
    print("당신은 재즈힙합덕후")

elif (a == 0 and b == 0 and c == 3) or (a == 0 and b == 3 and c == 3):
    print("당신은 힙합edm덕후")

elif (a == 1 and b == 1 and c == 2) or (a == 1 and b == 2 and c == 2):
    print("당신은 재즈락덕후")

elif (a == 1 and b == 1 and c == 3) or ( a == 1 and b == 3 and c == 3):
    print("당신은 락edm덕후")

elif (a == 2 and b == 2 and c == 3 ) or ( a == 2 and b == 3 and c == 3):
    print("당신은 재즈edm덕후")

else:
    print("음악을 넓게 들으시네요!")
