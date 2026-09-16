*This project has been created as part of the 42 curriculum by cycolonn.*

# 🤖 C++ Module 03 - Inheritance

## 📖 1. Description
**CPP03** focuses on class inheritance, constructor/destructor execution chaining, attribute protection levels, and derived class specialization.

This project is divided into three distinct exercises:

- `ex00` (`Aaaaand... OPEN!`) introduces the base class `ClapTrap`, establishing hit points, energy points, attack mechanics, and repair actions.
- `ex01` (`Serena, my love!`) implements `ScavTrap`, a derived class inheriting from `ClapTrap` with specialized stats, custom constructors/destructors, and an added guard gate capability (`guardGate`).
- `ex02` (`Repetitive work`) introduces `FragTrap`, another derived class with high-damage attributes and a specialized `highFivesGuys` action, reinforcing parallel derivation from a single base class.

---

<br />

## 🚀 2. Instructions

Navigate to any exercise directory (`ex00`, `ex01`, or `ex02`) and use the standard Makefile targets:

| Target | Description |
| :--- | :--- |
| `make` | Compiles the project using `c++` with `-Wall -Wextra -Werror -std=c++98`. |
| `make it` | Compiles and executes the binary immediately. |
| `make val` | Runs the binary under `valgrind` to verify memory integrity. |
| `make clean` / `fclean` / `re` | Standard 42 cleaning and recompilation rules. |

### Executables

Each exercise produces its own binary under the `bin/` directory:

```bash
cd ex00 && ./bin/intro
cd ex01 && ./bin/serena
cd ex02 && ./bin/frag
```

### Useful commands

```bash
make
make re
make clean
make fclean
```

---

<br />

## 🛠️ 3. Technical Choices & Learning Objectives
This module builds the inheritance foundations required before tackling subtype polymorphism in Module 04.

---

<br />

* 🧬 **Single & Sibling Inheritance**: Implemented `ScavTrap` and `FragTrap` as distinct derived classes inheriting from the shared parent `ClapTrap`.
* 🔒 **Encapsulation with `protected`**: Switched base attributes from `private` to `protected` so derived classes have direct, controlled access to stats without breaking encapsulation.
* 🔄 **Chaining Order**: Ensured correct construction order (base class first, derived class second) and reverse destruction order (derived first, base second).
* ⚔️ **Specialized Behaviors**: Overrode `attack()` for `ScavTrap` and provided exclusive member functions (`guardGate()` in `ScavTrap`, `highFivesGuys()` in `FragTrap`).
* ⚙️ **42 Compliance**: Canonical forms maintained across all classes, compiling under `-Wall -Wextra -Werror -std=c++98`.

---

<br />

## 📚 4. Resources

* 📄 **Official Documentation**:
    * [C++ Reference - Derived Classes](https://en.cppreference.com/w/cpp/language/derived_class) - Official rules on single inheritance.
    * [42 C++ Modules Documentation](https://harm-smits.github.io/42docs/) - Evaluation standards and module expectations.
* 🔗 **Concepts & Tutorials**:
    * [Order of Construction in Inheritance](https://www.learncpp.com/cpp-tutorial/order-of-construction-of-derived-classes/) - Construction and destruction cascades explained.
    * [Inheritance and Access Specifiers](https://www.learncpp.com/cpp-tutorial/inheritance-and-access-specifiers/) - Comparison between private, protected, and public inheritance.
