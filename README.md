# Библиотека StepperMotor для драйвера A4988

Эта библиотека предоставляет простой способ управления шаговым двигателем с использованием драйвера A4988 на платформе Arduino. Она позволяет управлять вращением шагового двигателя, направлением его вращения, а также включать и отключать драйвер.

## Возможности

- Вращение двигателя на заданное количество шагов.
- Управление направлением вращения.
- Включение и отключение драйвера двигателя.
- Настраиваемая задержка между шагами для контроля скорости двигателя.
  
## Установка

1. Скачайте файл библиотеки StepperMotor и добавьте его в ваш проект Arduino.
2. Откройте вашу Arduino IDE.
3. В Arduino IDE перейдите в меню Sketch > Include Library > Add .ZIP Library и выберите файл библиотеки.

## Функции

`StepperMotor(int stepPin, int dirPin, int enPin, int delayTime)`
Конструктор, который инициализирует шаговый двигатель с заданными номерами пинов и временем задержки.

stepPin: Пин, подключенный к входу STEP драйвера A4988.

dirPin: Пин, подключенный к входу DIR драйвера A4988.

enPin: Пин, подключенный к входу ENABLE драйвера A4988.

delayTime: Время задержки (в миллисекундах) между каждым шагом, контролирующее скорость двигателя.

`void begin()`
Настраивает пины для драйвера шагового двигателя в режиме вывода. Вызовите эту функцию в секции setup() вашего скетча Arduino.

`void rotate(int steps)`
Поворачивает шаговый двигатель на заданное число шагов. Положительное значение приводит к вращению двигателя по часовой стрелке, а отрицательное – против часовой стрелки.
steps: Количество шагов для вращения. Положительное значение поворачивает двигатель по часовой стрелке, отрицательное – против.

`void enable()`
Включает драйвер шагового двигателя, устанавливая пин ENABLE в состояние LOW.

`void disable()`
Отключает драйвер шагового двигателя, устанавливая пин ENABLE в состояние HIGH.

`void step()`
Выполняет один шаг вращения с задержкой между переходами пина STEP из высокого состояния в низкое для контроля скорости.

## Лицензия

Эта библиотека с открытым исходным кодом и доступна под лицензией MIT.
