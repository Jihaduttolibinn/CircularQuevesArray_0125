#include <iostream>
using namespace std;

class Queues {
	int FRONT, REAR, max = 5;
	int Queue_array[5];

};

public:
	Queues () {
		FRONT = -1;
		REAR = -1;

	}

	void insert() {
		int num;
		cout << "Enter a number: ";
		cin >> num;
		cout << endl;

		if ((FRONT == 0 && REAR == max - 1) || (FRONT == REAR + 1)) {
			cout << "\nQueue overflow\n";
		}

		if (FRONT == -1) {
			FRONT = 0;
			REAR = 0;
		}
		else {
			if (REAR == max - 1)
				REAR = 0;
			else
				REAR = REAR + 1;

		}
		queue_array[REAR] = num;

	}

	void remove() {
		if (FRONT == -1) {
			cout << "Queue underFlow\n";
			return;
		}
	}
	cout << "\nThe element delete from the queue is: " << queue_array[FRONT] << "\n";

	// cek jika antrian hanya memiliki satu alement
	if (FRONT == REAR) {
		FRONT = -1;
		REAR = -1;
	}
	else {
		// jika elemnt yg di hapus berada di posisi terakhir array, kembali ke awal array
		if (FRONT == max - 1)
			FRONT = 0;
		else
			FRONT = FRONT + 1;

		}
	}

	void display() {

		int FRONT_position = FRONT;
		int REAR_position = REAR;
	
		// CEK APAKAH ANTRIAN KOSONG
		if (FRONT == -1) {
			cout << "Queue is empty\n";
			return;
		}
		cout << "Elements in the queue are....\n";

		// JIKA FRONT_position <= REAR _position, iterasi dari FRONT hingga REAR
		if (FRONT_position <= REAR_position) {
			while (FRONT_position <= REAR_position) {
				cout << queue_array[FRONT_position] << "   ";
				FRONT_position++;
			}
			cout << endl;
		}

		else {
			// JIKA FRONT_position > REAR_position, iterasi dari FRONT gingga akhir array
			while (FRONT_position <= max - 1) {
				cout << queue_array[FRONT_position]
			}
		}

		// ITERASI DARI AWAL ARRAY HINGGA REAR
		while (FRONT_position <= REAR_position){
			cout << queue_array[FRONT_position] << "   ";
			FRONT_position++;
		}
		cout << endl;
    }
  }
};

int main(){
	Queue q;
	char ch;

	while (true) {
		try {
			cout << "Menu" < , endl;
			cout << "1. Implement insert operation" << endl;
			cout << "2. Implement delete operation" << endl;
			cout << "3. Display values" << endl;
			cout << "4. Exit" << endl;
			cout << "Enter your choise (1-4): ";
			cin >> ch;
			cout << endl;


			switch (ch) {
			case '1': {
				q.insert();
				break;
			}
			case '2': {
				q.remove();
				break;
			}
			case '3': {
				q.display();
				break;
			}
			case '4': {
				return 0;
			}
			default: {
				cout << "Invalid option!!" << endl;
				break;
			}
			}
		}
		catch (exception& e) {
			cout << "Check for the values entered." << endl;
		}
	}
	return 0;
}




		












