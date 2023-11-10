#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// TASK 1 ----------------------------------------------------------------------
//
//
//class Vehicle {
//public:
//	
//	virtual void start() {
//		cout << "Started!"<<endl;
//	};
//
//	virtual void stop() {
//		cout << "Stopped!"<<endl;
//	};
//
//};
//
//class Car : public virtual Vehicle {
//public:
//	void start() {
//		cout << "Started in Car!"<<endl;
//	}
//	void stop() {
//		cout << "Stopped in Car!"<<endl;
//	};
//};
//
//class Motorcycle : public virtual Vehicle {
//public:
//	void acrobatic() {
//		cout << "Acrobatic!"<<endl;
//	}
//};
//
//
//int main() {
//
//	Vehicle mercedes;
//	Motorcycle moto;
//	Car redMerc;
//	mercedes.start();
//	mercedes.stop();
//	redMerc.start();
//	redMerc.stop();
//	moto.acrobatic();
//
//
//	return 0;
//}


// TASK 2 ----------------------------------------------------------------------

class MediaPlayer {
public:
	virtual void start() {
		cout << "Start" << endl;
	}
	virtual void stop() {
		cout << "Stop" << endl;
	}
	virtual void pause() {
		cout << "Pause" << endl;
	}
};

class AudioPlayer: public MediaPlayer {
public:
	void loud() {
		cout << "Make it loud" << endl;
	}
};

class VideoPlayer : public MediaPlayer {
public:
	void rewind() {
		cout << "Rewind record" << endl;
	}
};

int main() {
	

	MediaPlayer m;
	AudioPlayer a;
	VideoPlayer v;

	m.start();
	m.pause();
	m.stop();
	a.start();
	a.loud();
	v.rewind();
	v.stop();

	return 0;
}