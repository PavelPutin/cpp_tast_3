//
// Created by RobotComp.ru on 18.03.2024.
//

#ifndef CPP_TAST_3_PUEQUE_H
#define CPP_TAST_3_PUEQUE_H

namespace task_3 {

    template <class E>
    struct puequeNode {
        const E *value;
        puequeNode *next;
    };

    template <class E>
    class Pueque {
    public:
        Pueque();
        ~Pueque();

        void add(const E &element);
        const E *pull();
        const E *peek();
    private:
        puequeNode<E> *dummy = new puequeNode<E>;
        puequeNode<E> *head;
        puequeNode<E> *tail;
    };


    template <class E>
    Pueque<E>::Pueque() {
        head = dummy;
        tail = dummy;
    }

    template <class E>
    Pueque<E>::~Pueque() {
        while (head != tail) {
            puequeNode<E> *toDelete = head;
            head = head->next;
            delete toDelete->value;
            delete toDelete;
        }
    }

    template <class E>
    void Pueque<E>::add(const E &element) {
        puequeNode<E> *newNode = new puequeNode<E> {
            &element
        };
        tail->next = newNode;
        tail = tail->next;
    }

    template <class E>
    const E *Pueque<E>::pull() {
        if (head == tail) {
            return nullptr;
        }

        const E *result = head->next->value;
        head = head->next;
        return result;
    }

    template <class E>
    const E *Pueque<E>::peek() {
        if (head == tail) {
            return nullptr;
        }

        return head->next->value;
    }

} // task_3

#endif //CPP_TAST_3_PUEQUE_H
