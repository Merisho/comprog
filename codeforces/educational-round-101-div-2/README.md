## C
Перше що спало на думку - знайти найбільший елемент `h`. Далі двома циклами підряд пройтись вліво та вправо, перевірити чи можемо ми розмістити `i-ту` частини забору так, щоб спільна сторона мала довжину хоча б 1.
Але нам потрібно памятати якою була попередня стартова точка частини забору. Тому нам потрібно визначене значення стартової точки.

Наприклад:

частину `i` ми можемо підняти так, щоб спільна сторона була довжиною `[1; k - 1]`.
Але `h[i - 1] > h[i]` тому спільної сторони розміром в 1 у частин `i` та `i + 1` може бути не достатньо для того, щоб частини `i` та `i - 1` мали спільну сторону хоча б розміром 1.
