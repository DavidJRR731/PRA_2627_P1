	#ifndef LIST_LINKED_H
	#define LIST_LINKED_H

	#include <ostream>
	#include <stdexcept>
	#include "List.h"
	#include "Node.h"

	template <typename T>
	class ListLinked : public List<T> {
	    private:
        	Node<T>* first;
       		 int n;

   	 public:
        	ListLinked();
       		 ~ListLinked();
																						
        void insert(int pos, T e) override;
        void append(T e) override;
        void prepend(T e) override;
        T remove(int pos) override;
        T get(int pos) const override;
        int search(T e) const override;
        bool empty() const override;
        int size() const override;

        T operator[](int pos);

        friend std::ostream& operator<<(std::ostream &out, const ListLinked<T> &list) {
            out << "[";
            Node<T>* aux = list.first;
            while (aux != nullptr) {
                out << aux->data;
                if (aux->next != nullptr) {
                    out << ", ";
                }
                aux = aux->next;
            }
            out << "]";
            return out;
        }
};	
#endif LIST_LINKED_H 
