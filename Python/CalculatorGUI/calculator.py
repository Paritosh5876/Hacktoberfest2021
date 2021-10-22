#  ****::Calculator Application::*****

from tkinter import *
from tkinter.font import Font
from tkinter import messagebox
root = Tk()

root.title("Calculator")

s = StringVar()
entry = Entry(root, textvariable=s, width=40, justify=RIGHT,)
entry.place(x=30, y=10)

history_label = Label(root, text="History: ", relief=SUNKEN, anchor=W, height=5, width=30, bg='white')
history_label.pack(side=BOTTOM, fill=X)


# *** ::Functions:: ***

def number_1():
    entry.insert(INSERT,"1")


def number_2():
    entry.insert(INSERT,"2")


def number_3():
    entry.insert(INSERT,"3")


def number_4():
    entry.insert(INSERT,"4")


def number_5():
    entry.insert(INSERT,"5")


def number_6():
    entry.insert(INSERT,"6")


def number_7():
    entry.insert(INSERT,"7")


def number_8():
    entry.insert(INSERT,"8")


def number_9():
    entry.insert(INSERT,"9")


def number_0():
    entry.insert(INSERT,"0")


def operator_sum():
    entry.insert(INSERT,"+")


def operator_sub():
    entry.insert(INSERT,"-")


def operator_multi():
    entry.insert(INSERT,"*")


def operator_div():
    entry.insert(INSERT,"/")


def operator_mod():
    entry.insert(INSERT,"%")


def operator_dot():
    entry.insert(INSERT,".")


def number_del():
    length = len(entry.get())
    entry.delete(length - 1, None)


def number_clear():
    entry.delete(0, END)


history = []


def operator_equal():
    content = entry.get()
    result = str(eval(content))
    entry.delete(0, "end")
    entry.insert(INSERT, result)
    history.append(content)
    history.reverse()
    history_label.configure(text="History: " + " | ".join(history[0:4]))


def exit_window():
    mssg = messagebox.askquestion(title="Exit", message="Do you really want to exit?")
    if mssg == "yes":
        root.quit()


#  *** ::Buttons:: ***

button_1 = Button(root, text="1", width=6, command=number_1)
button_1.place(x=30, y=80)

button_2 = Button(root, text="2", width=6, command=number_2)
button_2.place(x=90, y=80)

button_3 = Button(root, text="3", width=6, command=number_3)
button_3.place(x=150, y=80)

button_4 = Button(root, text="4", width=6, command=number_4)
button_4.place(x=30, y=130)

button_5 = Button(root, text="5", width=6, command=number_5)
button_5.place(x=90, y=130)

button_6 = Button(root, text="6", width=6, command=number_6)
button_6.place(x=150, y=130)

button_7 = Button(root, text="7", width=6, command=number_7)
button_7.place(x=30, y=180)

button_8 = Button(root, text="8", width=6, command=number_8)
button_8.place(x=90, y=180)

button_9 = Button(root, text="9", width=6, command=number_9)
button_9.place(x=150, y=180)

button_zero = Button(root, text="0", width=6, command=number_0)
button_zero.place(x=90, y=230)


# *** ::Operator Buttons:: ***

button_div = Button(root,text="/", width=7, command=operator_div)
button_div.place(x=210, y=80)

button_multi = Button(root,text="*", width=7, command=operator_multi)
button_multi.place(x=210, y=130)

button_sub = Button(root,text="-", width=7, command=operator_sub)
button_sub.place(x=210, y=180)

button_sum = Button(root,text="+", width=7, command=operator_sum)
button_sum.place(x=210, y=230)

button_mod = Button(root,text="%", width=6, command=operator_mod)
button_mod.place(x=30, y=230)

button_clear = Button(root,text="C", width=7, font="times 10 bold", command=number_clear)
button_clear.place(x=210, y=40)

button_del = Button(root,text="del", width=6, font="times 10 bold", command=number_del)
button_del.place(x=150, y=40)

button_dot = Button(root,text=".", width=6, command=operator_dot)
button_dot.place(x=150, y=230)

button_equal = Button(root,text="=", width=6, command=operator_equal)
button_equal.place(x=90, y=40)

button_exit = Button(root,text="Exit", width=8, command=exit_window, bd=5, bg="yellow", fg="blue")
button_exit.place(x=110, y=280)

# to make our window not resizeable
root.resizable(False, False)

# fixing the shape of our Calculator window
root.geometry("300x400+100+100")

# using this so that after running code our Calculator window remains on the screen
# otherwise it will get closed automatically
root.mainloop()

