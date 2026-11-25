*This project has been created as part of the 42 curriculum by elmondo.*

# <img align="middle" height="115" src="https://raw.githubusercontent.com/ayogun/42-project-badges/main/badges/numbered_cpps/CPP04.png" alt="CPP04 badge"/> <picture><source media="(prefers-color-scheme: dark)" srcset="https://readme-typing-svg.demolab.com/?font=Fira+Code&weight=600&size=55&pause=1000&color=58A6FF&vCenter=true&width=400&height=80&lines=CPP04"><source media="(prefers-color-scheme: light)" srcset="https://readme-typing-svg.demolab.com/?font=Fira+Code&weight=600&size=55&pause=1000&color=0366D6&vCenter=true&width=400&height=80&lines=CPP04"><img align="middle" src="https://readme-typing-svg.demolab.com/?font=Fira+Code&weight=600&size=55&pause=1000&color=0366D6&vCenter=true&width=400&height=80&lines=CPP04" alt="CPP04"/></picture>

[![Common Core](https://img.shields.io/badge/-Common%20Core-24292e?style=flat&logo=data:image/svg%2Bxml;base64,PHN2ZyByb2xlPSJpbWciIHZpZXdCb3g9IjAgMCAyNCAzNCIgeG1sbnM9Imh0dHA6Ly93d3cudzMub3JnLzIwMDAvc3ZnIj48dGl0bGU+NDI8L3RpdGxlPjxkZXNjPkxvZ28gNDIgY29uIHBhZGRpbmcgaW5mZXJpb3JlOiBHaXRIdWIgcmltdW92ZSBnbGkgYXR0cmlidXRpIHN0eWxlIGRhbCBtYXJrZG93biwgcXVpbmRpIGlsIG1hcmdpbmUgY2hlIGFsbGluZWEgbCdpY29uYSBhbCB0ZXN0byBkZWwgdGl0b2xvIGUnIGluY29ycG9yYXRvIG5lbCB2aWV3Qm94LiBJbCBnbGlmbyBvY2N1cGEgeSAzLjU3NC0yMC40MjYgZSBzb3R0byByZXN0YW5vIDEzLjU3NCB1bml0YScgdnVvdGU6IHJlc28gYSA0MnB4IGNvbiBhbGlnbj1taWRkbGUsIGlsIGdsaWZvIHN0YSB+MnB4IHNvcHJhIGxhIGJhc2VsaW5lIGRlbCB0aXRvbG8uIFBlciBhbHphcmxvIGFuY29yYSBzZXJ2b25vICsxIHVuaXRhJyBkaSB2aWV3Qm94IG9nbmkgKzEuMnB4IGRpIGhlaWdodCAoY2lyY2EgKzAuNnB4IGRpIHNvbGxldmFtZW50bywgYSBwYXJpdGEnIGRpIGRpbWVuc2lvbmUgZGVsIGdsaWZvKS48L2Rlc2M+PHN0eWxlPnBhdGh7ZmlsbDojMDAwMDAwfSBAbWVkaWEgKHByZWZlcnMtY29sb3Itc2NoZW1lOmRhcmspe3BhdGh7ZmlsbDojRkZGRkZGfX08L3N0eWxlPjxwYXRoIGQ9Ik0xOS41ODEgMTYuODUxSDI0di00LjQzOVpNMjQgMy41NzRoLTQuNDE5djQuNDJsLTQuNDE5IDQuNDE4djQuNDRoNC40MTl2LTQuNDRMMjQgNy45OTNabS00LjQxOSAwaC00LjQxOXY0LjQyem0tNi4zMjQgOC44MzhINC40MTlsOC44MzgtOC44MzhIOC44MzhMMCAxMi40MTJ2My41OTVoOC44Mzh2NC40MTloNC40MTl6Ii8+PC9zdmc+Cg==)](https://profile.intra.42.fr/users/elmondo)
![Language](https://img.shields.io/badge/language-C%2B%2B98-blue)
![Flags](https://img.shields.io/badge/flags--Wall%20--Wextra%20--Werror-passing-brightgreen)
![Valgrind](https://img.shields.io/badge/valgrind-no%20leaks-brightgreen)

> Subtype polymorphism: virtual functions, deep copies, abstract classes.

---

## 📖 Description

`CPP04` is Module 04 of the 42 **C++ modules**. Every exercise is written in **C++98** and compiled with `c++ -Wall -Wextra -Werror -std=c++98`.

What this module covers:

- `virtual` functions and virtual destructors
- Why `WrongAnimal` / `WrongCat` behave differently without `virtual`
- Deep copy of an object owning a heap-allocated `Brain`
- Abstract classes (pure virtual functions) that cannot be instantiated
- Arrays of base-class pointers deleted through the base

---

## 🗂️ Exercises

| Directory | Exercise | Executable | Description |
|:---------:|----------|:----------:|-------------|
| `ex00` | Polymorphism | `AnimalFarm` | `Animal` / `Dog` / `Cat` with a virtual `makeSound()`, plus the non-virtual `WrongAnimal` / `WrongCat` counterexample. |
| `ex01` | I don't want to set the world on fire | `AnimalFarm` | Adds a `Brain` (100 ideas) owned by `Dog` and `Cat`, with deep copy. |
| `ex02` | Abstract class | `AnimalFarm` | `Animal` becomes abstract (pure virtual `makeSound()`). |

---

## ⚙️ Compilation & Usage

Each exercise is independent and has its own `Makefile`:

```bash
make        # build the executable
make clean  # remove object files
make fclean # remove object files and the executable
make re     # fclean + make
```

**`ex00` — Polymorphism**
```bash
cd ex00 && make
./AnimalFarm
```

**`ex01` — I don't want to set the world on fire**
```bash
cd ex01 && make
./AnimalFarm
```

**`ex02` — Abstract class**
```bash
cd ex02 && make
./AnimalFarm
```

---

## 📁 Project Structure

```
CPP04/
├── ex00/
│   ├── Animal.cpp
│   ├── Animal.hpp
│   ├── Cat.cpp
│   ├── Cat.hpp
│   ├── Dog.cpp
│   ├── Dog.hpp
│   ├── WrongAnimal.cpp
│   ├── WrongAnimal.hpp
│   ├── WrongCat.cpp
│   ├── WrongCat.hpp
│   ├── main.cpp
│   └── Makefile
├── ex01/
│   ├── Animal.cpp
│   ├── Animal.hpp
│   ├── Brain.cpp
│   ├── Brain.hpp
│   ├── Cat.cpp
│   ├── Cat.hpp
│   ├── Dog.cpp
│   ├── Dog.hpp
│   ├── WrongAnimal.cpp
│   ├── WrongAnimal.hpp
│   ├── WrongCat.cpp
│   ├── WrongCat.hpp
│   ├── main.cpp
│   └── Makefile
└── ex02/
    ├── Animal.cpp
    ├── Animal.hpp
    ├── Brain.cpp
    ├── Brain.hpp
    ├── Cat.cpp
    ├── Cat.hpp
    ├── Dog.cpp
    ├── Dog.hpp
    ├── WrongAnimal.cpp
    ├── WrongAnimal.hpp
    ├── WrongCat.cpp
    ├── WrongCat.hpp
    ├── main.cpp
    └── Makefile
```

---

## 📚 Resources

- [Polymorphism — cppreference](https://en.cppreference.com/w/cpp/language/virtual)
- [Abstract classes — cppreference](https://en.cppreference.com/w/cpp/language/abstract_class)
- [Valgrind quick start](https://valgrind.org/docs/manual/quick-start.html)
- `man 3 cout`, [GNU Make manual](https://www.gnu.org/software/make/manual/make.html)
- [Valgrind](https://valgrind.org/) — memory error and leak detector used for testing

---

## 🎯 Key Takeaways

- Using **virtual dispatch** and virtual destructors correctly.
- Implementing **deep copies** to avoid shared ownership and double frees.
- Designing with **abstract base classes**.
- Verifying zero leaks with **Valgrind**.
