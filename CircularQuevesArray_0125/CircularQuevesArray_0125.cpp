#include <iostream>
using namespace std;

class Queues {
	int FRONT, REAR, max = 5;
	int queue_array[5];

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

