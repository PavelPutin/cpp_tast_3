//
// Created by RobotComp.ru on 02.04.2024.
//

#include "PuqueException.h"

namespace task_3 {

    PuqueException::PuqueException(const std::string &message) {
        this->message = message;
    }

    const std::string &PuqueException::getMessage() {
        return message;
    }


} // task_3