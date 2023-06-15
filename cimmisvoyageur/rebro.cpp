#include "rebro.h"

EDGE::EDGE()
{

}

EDGE::EDGE(int from_X, int from_Y, int to_X, int to_Y, int Weight, int Type)
{
    from_x = from_X;
    from_y = from_Y;
    to_x = to_X;
    to_y = to_Y;
    weight = Weight;
    type = Type;
}