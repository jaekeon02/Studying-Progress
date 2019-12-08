# 계산기를 만들어 보겠습니다.
# Entry 2개 -> 숫자 2개를 각각 입력받습니다.
# 버튼 5개
#| +, -, *, /, %|
# Entry 두개에 값을 채워 넣고
#| +, -, *, /, %|버튼을 누르면 두 엔트리에 들어있던 값을 토대로
# 결과값을 출력해줍니다
# Label 1개 => 결과값을 콘솔창이 아닌 Label에 출력해보세요
from tkinter import *
calculator = Tk()
calculator.configure(width="75m",height="100m")
##########함수배치부분###########
def ADD():
    data1=0
    data1=int(E1.get())+int(E2.get())
    Lb2=Label(calculator, text=str(data1))
    Lb2.place(x=110,y=40,width=100,height=30)
def MINUS():
    data1=0
    data1=int(E1.get())-int(E2.get())
    Lb2=Label(calculator, text=str(data1))
    Lb2.place(x=110,y=40,width=100,height=30)
def MULTI():
    data1=0
    data1=int(E1.get())*int(E2.get())
    Lb2=Label(calculator, text=str(data1))
    Lb2.place(x=110,y=40,width=100,height=30)
def DIVIDE():
    data1=0
    data1=int(E1.get())/int(E2.get())
    Lb2=Label(calculator, text=str(data1))
    Lb2.place(x=110,y=40,width=100,height=30)
def REMAIN():
    data1=0
    data1=int(E1.get())%int(E2.get())
    Lb2=Label(calculator, text=str(data1))
    Lb2.place(x=110,y=40,width=100,height=30)
##########창배치부분############
# 엔트리 창 설정
E1=Entry(calculator)
E1.place(x=10,y=10, width=100,height=30)
E2=Entry(calculator)
E2.place(x=10,y=80, width=100,height=30)
# 버튼설정
Button(calculator, text="+", command=ADD).place(x=10,y=120,width=30,height=30)
Button(calculator, text="-", command=MINUS).place(x=50,y=120,width=30,height=30)
Button(calculator, text="*", command=MULTI).place(x=10,y=160,width=30,height=30)
Button(calculator, text="/", command=DIVIDE).place(x=50,y=160,width=30,height=30)
Button(calculator, text="%", command=REMAIN).place(x=90,y=120,width=30,height=70)
# 레이블설정
Lb1=Label(calculator, text="결과판")
Lb1.place(x=120,y=10,width=100,height=30)






calculator.mainloop()