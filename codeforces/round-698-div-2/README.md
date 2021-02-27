## C
Перше що спало на думку це те, що у масиві `d` рівно `n` унікальних чисел. Далі пробував різними математичними маніпуляціями з `d` виявити якусь властивість симетричного масиву `a`. Знайшов, що `2 * (d[0] + diff / -2) == sum(d)`, де `diff = d[0] - d[1] - d[2] - d[3] - ... - d[n - 1]`. Але це очевидно, тому що якщо спростити вираз, то вийдемо на те саме `sum(d)`. У самому кінці контесту спробував позбутися модуля, тобто зрозумів, що ми можемо відсортувати `a`. Тоді кожне `a[i] = sum(j <= i, a[i] - a[j]) + sum(j > i, a[j] - a[i])`. Але далі нічого не встиг придумати. Забагато часу витратив на безглузді математичні перетворення.