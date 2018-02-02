//
// Created by per on 28.01.18.
//
#include <pybind11/pybind11.h>
namespace py = pybind11;
int add(int i, int j) {
    return i + j;
}

void init_Constants(py::module &);
void init_Unit(py::module &);
void init_Tilemap(py::module &);
void init_Tile(py::module &);
void init_Player(py::module &);
void init_Game(py::module &);

void init_version(py::module &m) {
#ifdef VERSION_INFO
    m.attr("__version__") = VERSION_INFO;
#else
    m.attr("__version__") = "dev";
#endif
}


PYBIND11_MODULE(DeepRTSEngine, m) {
    init_Constants(m);
    init_Unit(m);
    init_Tile(m);
    init_Tilemap(m);
    init_Game(m);
    init_Player(m);
    init_version(m);


}