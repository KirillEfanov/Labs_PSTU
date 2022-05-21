#pragma once
#include <vector>
#include <GL/glut.h>
#include <iostream>
#include <string>
using namespace std;
const int maxi = 20;//максимальный размер 

struct vertCoord //координаты объектов
{
	int x, y;
};

class Graph
{
private:
	vector<int> vL;
	int Mati[maxi][maxi];
public:
	Graph();// конструктор без параметров 
	~Graph() {}; //деструктор 
	int GetVertexElement(int i) { return vL[i]; }                     
	int GetAdjMatrixElement(int i, int j) { return Mati[i][j]; }
	int GetAmountEdges();          
	int GetAmountVerts() { return vL.size(); }                       
	int GetVertPos(const int& v);	
	bool IsFull();
	void InsertVertex(const int& v);          
	void InsertEdge(const int& v, const int& v2, int w);                                                  
	void DeleteVertex();// удаление ребра                            
	void drawGraph();// отрисовка графа                                 
};
void Circle(int x, int y, int R);// создание круга
void Text(int nom, int x1, int y1);// отрисовка текста
void Line(int text, int x0, int y0, int x1, int y1);// отрисовка линий
void Vertex(int n);// 
void Button1();// описание кнопки 1
void Button2();// описание кнопки 2
void Button3();// описание кнопки 3
void mGraph();// создание графа
void Coords(int i, int n); //устанавливаем координаты
void Move(int x, int y); //движение мышки
void Click(int button, int state, int x, int y); //работа с кнопками
void reshape(int w, int h);
void display();
bool* zon = new bool[maxi];
bool per = false; 
int ver;
int CursX;
int CursY;
vertCoord vertC[maxi + 1];
int R;
int n;
int l = 0;
int** M;
int** M2;
int** M5;
Graph graph;
int WinW = 1000;
int WinH = 700;
Graph::Graph() //конструктор без параметров
{
	for (int i = 0; i < maxi; i++)
	{
		zon[i] = false;
		for (int j = 0; j < maxi; j++)
			Mati[i][j] = 0;
	}
}

int Graph::GetVertPos(const int& vertex)
{
	for (size_t i = 0; i < vL.size(); i++)
	{
		if (vL[i] == vertex)
			return i;
	}
	return -1;
}


bool Graph::IsFull()
{
	return (vL.size() == maxi);
}

void Graph::InsertVertex(const int& vertex)
{
	if (!IsFull())
		vL.push_back(vertex);
}

void Graph::InsertEdge(const int& vertex1, const int& vertex2, int weight)
{
	if (GetVertPos(vertex1) != (-1) && GetVertPos(vertex2) != (-1))
	{
		int vertPos1 = GetVertPos(vertex1);
		int vertPos2 = GetVertPos(vertex2);
		if (Mati[vertPos1][vertPos2] == 0 && Mati[vertPos2][vertPos1] == 0)
		{
			Mati[vertPos1][vertPos2] = weight;
		}
	}
}

void Graph::DeleteVertex()
{
	int n = vL.size();
	for (int j = 0; j < n; j++)
	{
		Mati[n - 1][j] = 0;
		Mati[j][n - 1] = 0;
	}

	vL.pop_back();
}

int Graph::GetAmountEdges()
{
	int edges = 0;
	for (int i = 0; i < vL.size(); i++)
		for (int j = 0; j < vL.size(); j++)
			if (Mati[i][j] > 0)
				edges++;
	return edges;
}

void Graph::drawGraph()// граф
{
	int n = graph.GetAmountVerts(); //размер графа
	for (int i = 0; i < n; i++)
	{
		if (!per)
			Coords(i, n); // задаем коодинаты для объектов
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int a = Mati[i][j]; //рисуем дороги 
			if (a != 0)
				Line(a, vertC[i].x, vertC[i].y, vertC[j].x, vertC[j].y);
			if (a == Mati[j][i] && a != 0)
				Line(a, vertC[j].x, vertC[j].y, vertC[i].x, vertC[i].y);
		}
	}
	Vertex(n); //передаем размер массива 
	glutPostRedisplay();
}

void Button1()
{
	glColor3f(0.5, 1.0, 1.0);// цвет
	glBegin(GL_QUADS);
	glVertex2i(WinW, WinH);// координаты 4 точек, чтобы нарисовать прямоугольник 
	glVertex2i(WinW, WinH - 90);
	glVertex2i(WinW - 150, WinH - 90);
	glVertex2i(WinW - 150, WinH);
	glEnd();
	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_LINE_LOOP);
	glVertex2i(WinW, WinH);// координаты 4 точек, чтобы нарисовать контур
	glVertex2i(WinW, WinH - 90);
	glVertex2i(WinW - 150, WinH - 90);
	glVertex2i(WinW - 150, WinH);
	glEnd();
	glColor3f(0.1f, 0.1f, 0.1f);
	string name = "Result";// текст на кнопке
	glRasterPos2i(WinW - 90, WinH - 50);
	for (int i = 0; i < name.length(); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, name[i]);
	}
}
void Button2()
{
	glColor3f(0.5, 1.0, 1.0);// цвет
	glBegin(GL_QUADS);
	glVertex2i(WinW, WinH - 100);// координаты 4 точек, чтобы нарисовать прямоугольник 
	glVertex2i(WinW, WinH - 190);
	glVertex2i(WinW - 150, WinH - 190);
	glVertex2i(WinW - 150, WinH - 100);
	glEnd();
	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_LINE_LOOP);
	glVertex2i(WinW, WinH - 100);// координаты 4 точек, чтобы нарисовать контур
	glVertex2i(WinW, WinH - 190);
	glVertex2i(WinW - 150, WinH - 190);
	glVertex2i(WinW - 150, WinH - 100);
	glEnd();
	glColor3f(0.1f, 0.1f, 0.1f);
	string name = "Add a city";// текст на кнопке
	glRasterPos2i(WinW - 100, WinH - 150);
	for (int i = 0; i < name.length(); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, name[i]);
	}
}

void Button3()
{
	glColor3f(0.5, 1.0, 1.0);// цвет
	glBegin(GL_QUADS);
	glVertex2i(WinW, WinH - 200); // координаты 4 точек, чтобы нарисовать прямоугольник 
	glVertex2i(WinW, WinH - 290);
	glVertex2i(WinW - 150, WinH - 290);
	glVertex2i(WinW - 150, WinH - 200);
	glEnd();
	glColor3f(0.0f, 0.0f, 0.0f);// цвет 
	glBegin(GL_LINE_LOOP);
	glVertex2i(WinW, WinH - 200); // координаты 4 точек, чтобы нарисовать контур
	glVertex2i(WinW, WinH - 290);
	glVertex2i(WinW - 150, WinH - 290);
	glVertex2i(WinW - 150, WinH - 200);
	glEnd();
	glColor3f(0.1f, 0.1f, 0.1f);
	string name = "Deleting a city"; // текст на кнопке
	glRasterPos2i(WinW - 100, WinH - 250);
	for (int i = 0; i < name.length(); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, name[i]);
	}
}

void Circle(int x, int y, int R)// функция для отрисовки круга
{
	glColor3f(1.0f, 1.0f, 1.0f);
	float x1, y1;
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++)
	{
		float theta = 2.0f * 3.1415926f * float(i) / float(360);
		y1 = R / 2  * cos(theta) + y;
		x1 = R / 2 * sin(theta) + x;;
		glVertex2f(x1, y1);
	}
	glEnd();

	glColor3f(0.0f, 0.0f, 0.0f);
	float x2, y2;
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < 360; i++)
	{
		float theta = 2.0f * 3.1415926f * float(i) / float(360);
		y2 = R / 2 * cos(theta) + y;
		x2 = R / 2 * sin(theta) + x;
		glVertex2f(x2, y2);
	}
	glEnd();
}

void Text(int text, int x1, int y1)
{
	glColor3f(0.0, 0.0, 0.0);
	GLvoid* font = GLUT_BITMAP_HELVETICA_18;
	string s = to_string(text);
	glRasterPos2i(x1 - 5, y1 - 5);
	for (size_t j = 0; j < s.length(); j++)
		glutBitmapCharacter(font, s[j]);
}

void Line(int text, int x0, int y0, int x1, int y1) // функция отрисовки линий 
{
	glColor3i(0, 0, 0); // цвет черный
	glBegin(GL_LINES);
	glVertex2i(x0, y0); // первая точка
	glVertex2i(x1, y1); // вторая точка
	glEnd();
}

void Vertex(int n)// рисуем города и их номера
{
	for (int i = 0; i < n; i++)
	{
		Circle(vertC[i].x, vertC[i].y, R); //передаются координаты для отрисовки круга
		Text(i + 1, vertC[i].x, vertC[i].y); //передаются координаты для отрисовки номеров городов
	}
}

void Coords(int i, int n) // задаем координаты
{
	int R_;
	int x0 = WinW / 2;
	int y0 = WinH / 2;
	if (WinW > WinH)
	{
		R = 5 * (WinH / 13) / n;
		R_ = WinH / 2 - R - 10;
	}
	else
	{
		R = 5 * (WinW / 13) / n;
		R_ = WinW / 2 - R - 10;
	}
	float theta = 2.0f * 3.1415926f * i / n;
	int y1 = R_ * cos(theta) + y0;
	int x1 = R_ * sin(theta) + x0;
	vertC[i].x = x1;
	vertC[i].y = y1;
}

void mGraph() { //создание таблицы
	int f = 0, f1 = 0, k;
	cout << "Количество городов: ";
	cin >> n;
	k = n;
	M = new int* [n];
	for (int i = 0; i < n; i++) {
		M[i] = new int[k];
	}
	for (int i = 1; i <= n; i++) {
		graph.InsertVertex(i);
	}
	for (int u = 0; u < n; u++) {// из города в тот же город дороги нету
		for (int j = f; j < f + 1; j++) {
			for (int i = f1; i < f1 + 1; i++) {
				M[j][i] = 1000;
			}
		}
		for (int j = f; j < f + 1; j++) { // записываем длины дорог
			for (int i = 0; i < f1; i++) {
				cout << "Раcстояние от " << j + 1 << " города до " << i + 1 << " города" << endl;
				cin >> M[j][i];
				graph.InsertEdge(j + 1, i + 1, M[j][i]);
			}
		}
		for (int j = f; j < f + 1; j++) {
			for (int i = f1 + 1; i < n; i++) {
				cout << "Раcстояние от " << j + 1 << " города до " << i + 1 << " города" << endl;
				cin >> M[j][i];
				graph.InsertEdge(j + 1, i + 1, M[j][i]);
			}
		}
		f += 1;
		f1 += 1;
	}
	cout << endl << endl << "Таблица: " << endl; //вывод созданной таблицы
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << M[i][j] << " ";
		}
		cout << endl;
	}

}

void Result(int ng, int** Mg) {// функция для решения задачи 

	int b, b1;
	b = ng;
	b1 = ng;
	int** M3;
	int colMin = 1000, lnMin = 1000;

	M2 = new int* [b];
	for (int i = 0; i < b; i++) {
		M2[i] = new int[b1];
	}

	M3 = new int* [n];
	for (int i = 0; i < b; i++) {
		M3[i] = new int[b1];
	}

	cout << endl;
	int w, edge = 0, y, z, d, p, r;
	int* g = new int[b * 2];
	int* g1 = new int[b * 2];
	int* g2 = new int[b * 2];
	y = 0;

	for (int j = 0; j < b; j++) {// записываем в новый массив
		for (int i = 0; i < b1; i++) {
			M2[j][i] = Mg[j][i];
		}
	}

	cout << endl << endl << "Таблица: " << endl; //вывод созданной таблицы
	for (int i = 0; i < b; i++) {
		for (int j = 0; j < b1; j++) {
			cout << M2[i][j] << " ";
		}
		cout << endl;
	}

	for (int j = 0; j < b; j++) {
		for (int i = 0; i < b1; i++) {
			M3[j][i] = M2[j][i];
		}
	}

	for (int u = 0; u < b; u++) {
		for (int i = 0; i < b1; i++) //редукция строк
		{
			lnMin = 1000;
			for (int j = 0; j < b; j++) // нахождение минимума
				if (M2[i][j] < lnMin)
					lnMin = M2[i][j];

			edge += lnMin;
			for (int j = 0; j < b; j++) // вычитаем из строк минимум
				if (M2[i][j] != 1000)
					M2[i][j] -= lnMin;
		}
		colMin = 1000; //редукция столбцов
		for (int i = 0; i < b; i++)
		{
			colMin = 1000;
			for (int j = 0; j < b; j++) // нахождение минимума в столбце
				if (M2[j][i] < colMin)
					colMin = M2[j][i];

			edge += colMin;
			for (int j = 0; j < b; j++) // вычитаем из столбцов минимум
				if (M2[j][i] != 1000)
					M2[j][i] -= colMin;
		}
		p = 0; //оценка нулей
		lnMin = 1000;
		colMin = 1000;
		for (int j = 0; j < b; j++) {// столбцы
			for (int i = 0; i < b1; i++) {// строки
				if (M2[j][i] == 0 and M2[j][i] != 1000) { //если элемент равен нулю и есть дорога, то находим его оценку
					z = i;
					d = j;
					for (int j = d; j < d + 1; j++) {
						for (int i = 0; i < z; i++) {// min в строке
							if (M2[j][i] < lnMin and M2[j][i] != 1000) {
								lnMin = M2[j][i];
							}
						}
					} 
					for (int j = d; j < d + 1; j++) {
						for (int i = z + 1; i < b1; i++) {// min в строке
							if (M2[j][i] < lnMin and M2[j][i] != 1000) {
								lnMin = M2[j][i];

							}
						}
					}
					for (int j = 0; j < d; j++) {
						for (int i = z; i < z + 1; i++) {
							if (M2[j][i] < colMin and M2[j][i] != 1000) {// min в столбце
								colMin = M2[j][i];
							}
						}
					}
					for (int j = d + 1; j < b1; j++) {
						for (int i = z; i < z + 1; i++) {
							if (M2[j][i] < colMin and M2[j][i] != 1000) {// min в столбце
								colMin = M2[j][i];
							}
						}
					}
					g[p] = lnMin + colMin; // хаписываем оценку нуля
					p += 1;
					lnMin = 1000;
					colMin = 1000;
				}
			}

		}
		colMin = 0;
		r = 0;
		for (int s = 0; s < p; s++) { // нахождение самой большой оценки
			if (g[s] > colMin) {
				colMin = g[s];
				r = s + 1; //номер самой большой оценки нуля
			}
		}
		w = 0;
		for (int j = 0; j < b1; j++) {// изменение таблицы
			for (int i = 0; i < b1; i++) {
				if (M2[j][i] == 0) { //если элемент равен нулю, то считаем этот ноль
					w += 1;
					if (w == r) {// если номер нуля совпадает с ноемром самой большой оценки, то меняем таблицу
						d = j;
						z = i;
						g1[y] = d + 1; // записываем дорогу из одного города в другой
						g1[y + 1] = z + 1;
						y += 2;
						for (int j = d; j < d + 1; j++) { // изменение таблицы 
							for (int i = 0; i < b1; i++) {
								M2[j][i] = 1000;
							}
						}
						for (int j = 0; j < b; j++) {
							for (int i = z; i < z + 1; i++) {
								M2[j][i] = 1000;
							}
						}
						for (int j = z; j < z + 1; j++) {
							for (int i = d; i < d + 1; i++) {
								M2[j][i] = 1000;
							}
						}
					}
				}
			}
		}
	}

	int p1 = 0;
	for (int o = 0; o < b1 * 2; o++) {// записываем в новый массив первый город
		if (g1[o + p1] == 1) { //находим первый город
			g2[0] = g1[o + p1];
			g2[1] = g1[o + p1 + 1];
			g1[o + p1] = 0;
			g1[o + p1 + 1] = 0;
			p1 = p1 + 1;
		}
		else {
			p1 = p1 + 1;
		}
	}

	int p2 = 1;
	for (int i = 0; i < b; i++) {// записываем в новый массив отсортированный путь 
		p1 = 0;
		for (int o = 0; o < b1 * 2; o++) { // сортируем все пути
			if (g2[i + p2] == g1[o + p1]) {
				g2[i + 1 + p2] = g1[o + p1];
				g2[i + 2 + p2] = g1[o + p1 + 1];
				p1 = p1 + 1;
				p2 = p2 + 1;
			}
			else {
				p1 = p1 + 1;
			}
		}
	}
	int oi = 0; // выводим путь 
	for (int j = 0; j < b; j++) {
		for (int i = oi; i < oi + 1; i++) {
			cout << g2[i] << " -> ";
		}
		oi += 2;
	}
	cout << g2[b * 2 - 1];
	for (int i = 0; i < b * 2; i++) {
		g2[i] = g2[i] - 1;
	}

	int e1, e2;
	int summ = 0;
	p1 = 0;
	for (int k = 0; k < b1; k++) {// находим сумму дорог
		e1 = g2[p1];
		e2 = g2[p1 + 1];
		p1 += 2;
		for (int y = e1; y < e1 + 1; y++) {
			for (int t = e2; t < e2 + 1; t++) {
				summ = summ + M3[y][t];
			}
		}
	}
	cout << endl << "Длина самой короткой дороги: " << summ << endl;
}

void Move(int x, int y)//отслеживание движения мыши
{
	y = WinH - y;
	CursX = x;
	CursY = y;
	glutPostRedisplay();
}

void Click(int button, int state, int x, int y)//действия с кнопками 
{
	
	if (x <= WinW and x >= 850 and y >= 0 and y <= 90)
	{
		if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		{
			int cur = graph.GetAmountVerts(); // выводим результат, который зависит от графика
			if (cur == n) {
				Result(n, M);
			}
			else {
				if (cur >  n) {
					Result(cur, M5);
				}
				else {
					if (cur < n) {
						Result(cur, M);
					}
				}
				
			}

		}
	}
	if (x <= WinW and x >= 850 and y >= 100 and y <= 190)
	{
		if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		{
			l = 1;
			int n7, n6;
			int cur = graph.GetAmountVerts(); //создание нового города
			graph.InsertVertex(cur + 1);
			vertC[cur].x = WinW / 2;
			vertC[cur].y = WinH / 2;
			cout << endl << "Добавлена вершина: " << cur + 1 << endl;
			cur += 1;
			n7 = cur;
			n6 = cur;
			M5 = new int* [10];
			for (int i = 0; i < n6; i++) {
				M5[i] = new int[10];
			}
			if (cur - 1 > n) {
				for (int j = 0; j < n6; j++) {
					for (int i = 0; i < n7; i++) {
						M5[j][i] = M5[j][i];
					}
				}
			}
			for (int j = 0; j < n6 - 1; j++) {
				for (int i = 0; i < n7 - 1 ; i++) {
					M5[j][i] = M[j][i];
				}
			}
			M5[n6 - 1][n7 - 1] = 1000;
			for (int j = 0; j < n6 - 1; j++) {
				for (int i = n7 - 1; i < n7; i++) {
					cout << "Раcстояние от " << j + 1 << " города до " << i + 1 << " города" << endl;
					cin >> M5[j][i];
					graph.InsertEdge(j + 1, i + 1, M5[j][i]);
				}
			}
			for (int j = n6 - 1; j < n6; j++) {
				for (int i = 0; i < n7 - 1; i++) {
					cout << "Раcстояние от " << j + 1 << " города до " << i + 1 << " города" << endl;
					cin >> M5[j][i];
					graph.InsertEdge(j + 1, i + 1, M5[j][i]);
				}
			}
		}
	}
	if (x <= WinW and x >= 850 and y >= 200 and y <= 290) {// удаление вершины
		if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		{
			l = 2;
			graph.DeleteVertex();
			int cur = graph.GetAmountVerts();
			cout << endl << "Удалена вершина : " << cur << endl;
			return;
		}
	}
	
}

void reshape(int w, int h)//обеспечивает масшатабирование
{
	WinW = w;
	WinH = h;
	glViewport(0, 0, (GLsizei)WinW, (GLsizei)WinH);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, (GLdouble)WinW, 0, (GLdouble)WinH);
	glutPostRedisplay();
}

void display()//вывод изображения на экран
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, WinW, 0, WinH);
	glViewport(0, 0, WinW, WinH);
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);

	graph.drawGraph();

	Button1();
	Button2();
	Button3();

	glutSwapBuffers();
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "rus");

	glutInit(&argc, argv);
	mGraph();
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowSize(WinW, WinH);
	glutCreateWindow("Task");
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutMouseFunc(Click);
	glutPassiveMotionFunc(Move);
	glutMainLoop();
}