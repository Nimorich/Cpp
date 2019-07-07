# Cars = ["green", "blue", "black", "yellow"]
# zakaz = ["black", "white", "red"]
#
# for cvet in zakaz:
#     if cvet in Cars:
#         print(cvet + " Otlichniy vibor !")
#     else:
#         print(cvet + " cveta net")
#
# print("End")

def f(x):
    if(x<=(-2)):
        x=1-(x+2)**2
    elif(-2<x):
        x=x/-2
    elif(2<x):
        x=(x-2)**2+1
    print(x)

f(4)
