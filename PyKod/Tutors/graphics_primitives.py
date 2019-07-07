# подключение библиотеки под синонимом gr
import graphics as gr

# Инициализация окна с названием "Russian game" и размером 100х100 пикселей
window = gr.GraphWin("Domik", 400, 400)

def draw_ground():
	ground = gr.Line(gr.Point(0, 390), gr.Point(400, 390))
	ground.setWidth(20)
	ground.setOutline('green')
	ground.draw(window)

def dom():
	dom = gr.Rectangle(gr.Point(120, 315), gr.Point(150, 315))
	dom.setWidth(130)
	dom.setOutline('gray')
	dom.draw(window)

def krisha():
	krisha = gr.Polygon(gr.Point(40, 250), gr.Point(135, 150), gr.Point(230, 250))
	krisha.setWidth(0)
	krisha.setFill('black')
	krisha.draw(window)

def window1():
	window1 = gr.Line(gr.Point(110, 310), gr.Point(160, 310))
	window1.setWidth(50)
	window1.setOutline('white')
	window1.draw(window)

def solnishko():
	solnishko = gr.Circle(gr.Point(320, 70), 40)
	solnishko.setFill('yellow')
	solnishko.draw(window)

def serd():
	serd1 = gr.Polygon(gr.Point(292, 305), gr.Point(315, 330), gr.Point(338, 305))
	serd1.setWidth(2)
	serd1.setOutline('red')
	serd1.setFill('red')
	serd2 = gr.Circle(gr.Point(303, 300), 13)
	serd2.setOutline('red')
	serd2.setFill('red')
	serd3 = gr.Circle(gr.Point(327, 300), 13)
	serd3.setOutline('red')
	serd3.setFill('red')
	serd1.draw(window)
	serd2.draw(window)
	serd3.draw(window)

def tekst():
	tekst1 = gr.Text(gr.Point(140, 70), "С Днём рождения")
	tekst1.setSize(20)
	tekst1.setTextColor("red")
	tekst2 = gr.Text(gr.Point(150, 100), "Любимая !")
	tekst2.setSize(20)
	tekst2.setTextColor("red")
	tekst1.draw(window)
	tekst2.draw(window)

def defPack():
	draw_ground()
	dom()
	krisha()
	window1()
	solnishko()
	serd()
	tekst()

defPack()

window.getMouse()

# Закрытие окна после завершения работы с графикой
window.close()
