#pragma once
class Human {
	float height, weight;
public:
	Human(float h, float w) : height(h), weight(w) {};
	friend float calcIMB(Human h);
};
float calcIMB(Human h) {
	return (h.weight * h.weight) / h.height;
}