//
// Created by Darwin Yuan on 2020/8/30.
//

#ifndef MACO_FOREACH_2_H
#define MACO_FOREACH_2_H

#include <maco/detail/repeat_call_2.h>
#include <maco/pp_size.h>

#define __MACO_foreach_2(macro, ...) \
__MACO_overload(__MACO_repeat_call_2_, __VA_ARGS__) (macro, 0, __VA_ARGS__)

#endif //MACO_FOREACH_2_H
