# FPGA
Project to FPGA realated stuff

## Основные команды Verilator

| Команда                  | Назначение                       |
| ------------------------ | -------------------------------- |
| `verilator --cc file.sv` | Сгенерировать только C++-модель  |
| `verilator --exe tb.cpp` | Добавить testbench               |
| `--sv`                   | Включить поддержку SystemVerilog |
| `--trace`                | Генерация VCD трассировки        |
| `--top-module topname`   | Указать верхний модуль           |
| `-Wall`                  | Предупреждения                   |
| `--timing`               | Учитывать задержки (# delay)     |

## Полный рабочий шаблон Makefile

    TOP = top
    SRC = ../rtl/top.sv
    TB  = test_top.cpp
    
    all:
    verilator -Wall --cc $(SRC) --exe $(TB) --trace --top-module $(TOP)
    make -j -C obj_dir/ V$(TOP)
    
    run:
    ./obj_dir/V$(TOP)
