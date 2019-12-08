# 설계
# 버튼 2개, 추첨과 초기화 만들기
# 결과를 보여줄 레이블 만들기
# 함수 설정하기
# 추첨의 경우 버튼을 누를때마다 다시번호 추첨하게 하기

from tkinter import *
import random
lottorng = Tk()
lottorng.configure(width="75m",height="100m")

########함수 부분##########
def rng():
    luckynumber =[]
    while(len(luckynumber)!=6):
        number=random.randint(1,45)
        if number not in luckynumber:
            luckynumber.append(number)
            luckynumber.sort()
    Lb2=Label(lottorng, text=str(luckynumber))
    Lb2.place(x=10,y=50,width=200,height=30)

def maker():
    Lb3=Label(lottorng, text="제작자 : Jaekeon")
    Lb3.place(x=10,y=290,width=300,height=30)
    
def initialize():
    global Lb2
    Lb2.destroy()
    Lb2 = Label(lottorng, text="")
    Lb2.place(x=10,y=50,width=200,height=30)
    global Lb3
    Lb3.destroy()
    Lb3 = Label(lottorng, text="")
    Lb3.place(x=10,y=290,width=300,height=30)

########버튼 부분##########
Button(lottorng, text="제작자", command=maker).place(x=80,y=340,width=60,height=30)
Button(lottorng, text="추첨", command=rng).place(x=150,y=340,width=60,height=30)
Button(lottorng, text="초기화", command=initialize).place(x=220,y=340,width=60,height=30)
########레이블 부분########
Lb1=Label(lottorng, text="결과판")
Lb1.place(x=10,y=10,width=100,height=30)
Lb2 = Label(lottorng)
Lb3 = Label(lottorng)


lottorng.mainloop()