//
// Created by RobotComp.ru on 02.04.2024.
//

#ifndef CPP_TAST_3_PUQUEEXCEPTION_H
#define CPP_TAST_3_PUQUEEXCEPTION_H

#include <string>

namespace task_3 {

    class PuqueException : std::exception {
    public:
        PuqueException(const std::string &message);

        const std::string &getMessage();
    private:
        std::string message;
    };

} // task_3

#endif //CPP_TAST_3_PUQUEEXCEPTION_H
