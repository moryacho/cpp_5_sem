#include <iostream>
#include <string>
#include <tuple>
#include <vector>

using namespace std;

using Tuple = tuple<string, int, double>;

void printTupleOfThree(const Tuple& t)
{
    cout << "("
        << get<0>(t) << ", "
        << get<1>(t) << ", "
        << get<2>(t) << ")" << endl;
}

Tuple funtup(string s, int a, double d)
{
    s.append("!");
    return make_tuple(s, a, d * 10);
}

Tuple modifyTuple(Tuple t) {
    get<0>(t) += " modified";
    get<1>(t) += 1;
    get<2>(t) /= 2.0;
    return t;
}

tuple<int, double> extractFromTuple(Tuple t) {
    return make_tuple(get<1>(t) + 5, get<2>(t) - 1.0);
}

int main()
{
    vector<string> v1 = { "one", "two", "three", "four", "five", "six" };
    vector<int> v2 = { 1, 2, 3, 4, 5, 6 };
    vector<double> v3 = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6 };

    auto t0 = make_tuple(v1[0], v2[0], v3[0]);
    printTupleOfThree(t0);

    auto t1 = funtup(v1[1], v2[1], v3[1]);
    printTupleOfThree(t1);

    Tuple modifiedTuple = modifyTuple(t1);
    printTupleOfThree(modifiedTuple);

    auto extracted = extractFromTuple(modifiedTuple);
    cout << "Extracted Integer: " << get<0>(extracted) << ", Extracted Double: " << get<1>(extracted) << endl;

    return 0;
}
