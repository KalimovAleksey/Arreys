#include <iostream>
#include <string>

void ExOne();
void ExTwo();
void ExThree();
void ExFour();
void ExFive();
void ExSix();
void ExSeven();


int main() {
	setlocale(LC_ALL, "Russian"); //вводим в консоль русский язык
	
	ExOne(); 
	/* Сгенерировать массив со случайными числами в диапазоне : (H 0-100)*/

	// ExTwo();
	/* Вычислить сумму элементов массива: b. больших 9, меньших 20, меньших 3 */
	
	//ExThree();
	/*№10 Заменить все отрицательные элементы массива нулями*/

	//ExFour();
	/*№9 Посчитать количество элементов массива, больших нуля */

	//ExFive(); 
	//сумма четных и нечётных чисел

	//ExSix();
	// Создать новый массив из двух других массивов путём операций над элементами массивов: d-сложение
	
	//ExSeven();
	/*В населенном пункте проживает N человек. О каждом известны фамилия, возраст,
	пол.	A	B	C*/
}
void ExOne() {
	const int n = 10;
	int arr[n];

	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 101;
	}
	for (int i = 0; i < n; i++)
		std::cout << arr[i] << "\n";
 }
void ExTwo() {
	const int n = 10;							//создаём массив с переменными и записываем его
	int arr[n];
	int summMoreNine = 0,
		summLessTwenty = 0,
		summLessThree = 0;
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 50;
		std::cout << arr[i] << "\n";
	}

	for (int i = 0; i < n; i++) {						
		if (arr[i] > 9) {
			summMoreNine = summMoreNine + arr[i];
		}
		if (arr[i] < 20) {
			summLessTwenty = summLessTwenty + arr[i];
		}
		if (arr[i] < 3) {
			summLessThree = summLessThree + arr[i];
		}
	}
	std::cout << "\nsumm elements More Nine = " << summMoreNine << "\n";
	std::cout << "\nsumm elements Less Twenty = " << summLessTwenty << "\n";
	std::cout << "\nsumm elements Less Three = " << summLessThree << "\n";
}
void ExThree() {
	const int n = 7;					//создание нужного нам массива
	int arr[n];

	std::cout << "Before\n\n";			//записываем исходный для сравнения
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 41 - 20;
	}
	
	for (int i = 0; i < n; i++)			//преобразование отрицательных чисел в нули
		std::cout << arr[i] << "\t";
	std::cout << "\n\n";
	for (int i = 0; i < n; i++)
		if (arr[i] < 0)
			arr[i] = 0;

	std::cout << "After\n\n";			//записываем получившийся массив
	for (int i = 0; i < n; i++)
		std::cout << arr[i] << "\t";
}
void ExFour() {		
	const int n = 20;					//создаём и записываем исходный массив
	int arr[n];
	int summMoreZero = 0;
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 10;
	}
	for (int i = 0; i < n; i++)
		std::cout << "\n" << arr[i] ;

	for (int i = 0; i < n; i++)
		if (arr[i] > 0)
			summMoreZero++;
	std::cout << "\nNumber of array elements greater than zero  = " << summMoreZero << "\n";
}
void ExFive() {
	const int n = 15;					//создаём и записываем исходный массив
	int arr[n];
	int	chet = 0;
	int	nechet = 0;
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 11;
	}
	for (int i = 0; i < n; i++)
		std::cout << arr[i] << "\n";

	for (int i = 0; i < n; i++) {
		std::cout << arr[i] << "\n";
		if (arr[i] % 2 == 0) {
			chet = chet + arr[i];
		}
		if (arr[i] % 2 == 1) {
			nechet = nechet + arr[i];
		}
	}
	std::cout << "\nsumm Chet = " << chet << "\n";
	std::cout << "\nsumm Nechet = " << nechet << "\n";

}
void ExSix() {
	const int n = 10;						//создаём 3 массива 
	float arr1[n];
	float arr2[n];
	float arr3[n];
	std::cout << "Первый массив\tВторой массив\t\tИтог\n";

	for (int i = 0; i < n; i++) {
		arr1[i] = rand() % 101;
		arr2[i] = rand() % 11;
		std::cout << arr1[i] << "\t\t";
		std::cout << arr2[i] << "\t\t\t";
		arr3[i] = arr1[i] / arr2[i];		//операция деления
		std::cout << arr3[i] << "\n";		//вывод последнего массива
	}
}
void ExSeven() {

	const int n = 10;						//создаём 3 массива (Фамилии Возраст Пол)
	std::string arr1[n];
	int arr2[n];
	int arr3[n];

	int male = 0;
	int female = 0;




	std::cout << "Фамилии\t"
		<<"\tВозраст"
		<<"\t\tПол (М-0 Ж-1)\n";
		
	for (int i = 0; i < n; i++) {			//Записываем исходные данные
		arr1[i] = rand() % 201;
		arr2[i] = rand() % 65;
		arr3[i] = rand() % 2;
		std::cout << arr1[i] << "\t\t";
		std::cout << arr2[i] << "\t\t";
		std::cout << arr3[i] << "\n";
	}
		/*Ввести информацию о жителях данного пункта и посчитать количество
		женщин и мужчин, вывести информацию о тех, кого больше. Вывести возраст.*/
	std::cout << "\nПЕРВОЕ ЗАДАНИЕ\n";
		for (int i = 0; i < n; i++) {						
			if (arr3[i] == 0)
				male++;
			else
				female++;
		}
		if (male > female) {
			std::cout << "\nВозраст Мужчин\t";
			for (int i = 0; i < n; i++) {
				if ((male >= female) && (arr3[i] == 0)) {
					std::cout << arr2[i] << "\t";
				}
			}
		}
		else {
			std::cout << "\nВозраст Женщин\n";
			for (int i = 0; i < n; i++) {
				if ((male <= female) && (arr3[i] == 1))
					std::cout << arr2[i] << "\t";
			}
		}
		std::cout << "\n\n\n\n";							//отступ для следющего задания


		/*Ввести информацию о жителях данного пункта и посчитать количество
		женщин и мужчин, вывести информацию о среднем возрасте мужчин,
		напечатать фамилии тех, чей возраст ниже среднего.*/
	std::cout << "\nВТОРОЕ ЗАДАНИЕ\n";
		int srMaleAge = 0;
		int allMaleAge = 0;
		for (int i = 0; i < n; i++) {
			if (arr3[i] == 0) {
				allMaleAge = allMaleAge + arr2[i];
			}
		}
		srMaleAge = allMaleAge / male;						//нашли средний возраст мужчин
		std::cout << "Фамилии мужчин, чей возраст ниже среднего\n";
		for (int i = 0; i < n; i++) {
			if (arr2[i] < srMaleAge)
				std::cout << arr1[i]
				<< "\t";
		}
		std::cout << "\n\n\n\n";							//отступ для следющего задания
		

		/*Ввести информацию о жителях данного пункта и посчитать средний возраст
		женщин и мужчин, вывести информацию о тех, у кого возраст больше
		среднего.*/
	std::cout << "\nТРЕТЬЕ ЗАДАНИЕ\n";
		int srFemaleAge = 0;
		int allFemaleAge = 0;
		for (int i = 0; i < n; i++) {
			if (arr3[i] == 1) {
				allFemaleAge = allFemaleAge + arr2[i];
			}
		}
		srFemaleAge = allFemaleAge / female;				//нашли средний возраст женщин (могли и в прошлом задании это сделать, но всё бы смешалось)
		std::cout << "Вся информация о женщинах, чей возраст выше среднего женского\n";
		std::cout << "Фамилии\t"
			<< "\tВозраст"
			<< "\t\tПол (М-0 Ж-1)\n";
		for (int i = 0; i < n; i++) {
			if ((arr2[i] > srFemaleAge) && (arr3[i] == 1)) {
				std::cout << arr1[i] << "\t\t";
				std::cout << arr2[i] << "\t\t";
				std::cout << arr3[i] << "\n";
			}
		}
		std::cout << "Вся информация о мужчинах, чей возраст выше среднего мужского\n";
		std::cout << "Фамилии\t"
			<< "\tВозраст"
			<< "\t\tПол (М-0 Ж-1)\n";
		for (int i = 0; i < n; i++) {
			if ((arr2[i] > srMaleAge) && (arr3[i] == 0)) {
				std::cout << arr1[i] << "\t\t";
				std::cout << arr2[i] << "\t\t";
				std::cout << arr3[i] << "\n";
			}
		}
		std::cout << "\n\n";
}
	
	
	

