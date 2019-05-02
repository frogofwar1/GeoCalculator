#include <iostream>

namespace geo_cal
{
	static const double PI = 3.14159;
	
	class Triangle {

	private:
		double m_base;
		double m_height;

	public:
		Triangle(double t_base, double t_height)
			: m_base(t_base), m_height(t_height)
		{
		}

		double getArea() {
			return 0.5 * m_base * m_height;
		}
	};

	class Rectangle {

	private:
		double m_length;
		double m_width;

	public:
		Rectangle(double t_length, double t_width)
			: m_length(t_length), m_width(t_width)
		{
		}

		double getArea() {
			return m_length * m_width;
		}
	};

	class Parallelogram {

	private:
		double m_base;
		double m_height;

	public:
		Parallelogram(double t_base, double t_height)
			: m_base(t_base), m_height(t_height)
		{
		}

		double getArea() {
			return m_base * m_height;
		}
	};

	class Trapezoid {

	private:
		double m_topLength;
		double m_bottomLength;
		double m_height;

	public:
		Trapezoid(double t_topLength, double t_bottomLength, double t_height)
			: m_topLength(t_topLength), m_bottomLength(t_bottomLength),
			m_height(t_height)
		{
		}

		double getArea() {
			return 0.5 * (m_topLength + m_bottomLength) * m_height;
		}
	};

	class Circle {

	private:
		double m_radius;

	public:
		Circle(double t_radius)
			: m_radius(t_radius)
		{
		}

		double getArea() {
			return PI * m_radius * m_radius;
		}
	};

	class Ellipse {

	private:
		double m_longRadius;
		double m_shortRadius;

	public:
		Ellipse(double t_longRadius,double t_shortRadius)
			: m_longRadius(t_longRadius), m_shortRadius(t_shortRadius)
		{
		}

		double getArea() {
			return PI * m_longRadius * m_shortRadius;
		}
	};
	
	
}

using namespace std;
using namespace geo_cal;

int main() {

	int geoType;
	double length, width, base, height, topLength, bottomLength, radius,
		shortRadius, longRadius;
	Triangle *triangle;
	Rectangle *rectangle;
	Parallelogram *parallelogram;
	Trapezoid *trapezoid;
	Circle *circle;
	Ellipse *ellipse;


	cout << "This is Geometry Calculator" << endl;

	while (true) {
		
		cout << endl;
		cout << "Select geometry shape that you want to calculate its area" << endl;
		cout << "Enter 1 to select triangle" << endl;
		cout << "Enter 2 to select rectangle" << endl;
		cout << "Enter 3 to select parallelogram" << endl;
		cout << "Enter 4 to select trapezoid" << endl;
		cout << "Enter 5 to select circle" << endl;
		cout << "Enter 6 to select ellipse" << endl;
		cout << "Enter 0 to quit the program" << endl;
		cout << "Select the shape : ";
		cin >> geoType;

		switch (geoType) {

		default: 
			cout << "Please select geometry shape you want to calculate its area!" << endl;
			break;

		case 1:
			cout << "You selected triangle" << endl;
			cout << "Enter base : ";
			cin >> base;
			cout << "Enter height : ";
			cin >> height;
			triangle = new Triangle(base, height);
			cout << "Area of triangle = " << triangle->getArea() << endl;
			break;

		case 2:
			cout << "You selected rectangle" << endl;
			cout << "Enter length : ";
			cin >> length;
			cout << "Enter width : ";
			cin >> width;
			rectangle = new Rectangle(length, width);
			cout << "Area of rectangle = " << rectangle->getArea() << endl;
			break;

		case 3:
			cout << "You selected parallelogram" << endl;
			cout << "Enter base : ";
			cin >> base;
			cout << "Enter height : ";
			cin >> height;
			parallelogram = new Parallelogram(base, height);
			cout << "Area of parallelogram = " << parallelogram->getArea() << endl;
			break;

		case 4:
			cout << "You selected trapezoid" << endl;
			cout << "Enter top-length : ";
			cin >> topLength;
			cout << "Enter bottom-length : ";
			cin >> bottomLength;
			cout << "Enter height : ";
			cin >> height;
			trapezoid = new Trapezoid(topLength, bottomLength, height);
			cout << "Area of trapezoid = " << trapezoid->getArea() << endl;
			break;

		case 5:
			cout << "You selected circle" << endl;
			cout << "Enter radius : ";
			cin >> radius;
			circle = new Circle(radius);
			cout << "Area of circle = " << circle->getArea() << endl;
			break;

		case 6:
			cout << "You selected ellipse" << endl;
			cout << "Enter long-radius : ";
			cin >> longRadius;
			cout << "Enter short-radius : ";
			cin >> shortRadius;
			ellipse = new Ellipse(longRadius, shortRadius);
			cout << "Area of ellipse = " << ellipse->getArea() << endl;
			break;
				
		case 0:
			return false;
		}

		
	}
		
	
}