#include <iostream>
#include "board.h"
#define SIZE 5
using namespace std;

class BoardArray : public Board {
    Entry* array;
    int index;

    public:
        BoardArray() {
            array = new Entry[SIZE];
            index = 0;
        }

        void add(Entry* entry) {
            // TODO: IMPLEMENT THIS FUNCTION
            // ALGORITHM IS PROVIDED IN INSTRUCTIONS.TXT
            for(int i = 0; i < index; i++) {
                array[i].compare;
            }

            bool compare(Entry* entry) {
                array[i * sizeof(Entry)];
                if() {
                    .
                } even if(score < entry) {
                    cout << "<name>'s score is too low to be added!";
                }
            }

            bool compare(Entry* other) {
                return this->score > other->score;
            }

            void print() {
                cout << name << " (" << college << "): " << score << endl;
            }

            return;
        }

        void print() {
            for (int i = 0; i < index; i++) {
                cout << i + 1 << ". ";
                array[i].print();
            }
        }
};