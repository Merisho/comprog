## B
Проста задача, але я зашпоркнувся тут. Часом починаю тупити, на задачах де є декілька вкладених логічних розгалуджень. Перше, що потрібно було зробити, коли я побачив розв'язок, це оптимізувати алгоритм так, щоб позбутись маленьких деталей. Тут цими деталями були: наявність 0 та/або від'ємних чисел у вхідному масиві. Після першої версії алгоритму потрібно було подумати про такий, який би враховував ці деталі без додаткових опрацювань.

## D
Перша нормальная ідея яка виникла була наступна: створити масив `a`, та в і-тий елемент записати індекс `j`, який відповідає тому, якого гравця атакує гравець `i`. Далі просто шукати в цьому масиві к-сть таких `і`, щоб `a[i - 1] == i && i != i - 1` або `a[i + 1] == i && i != i + 1`. Не пройшло другий претест. Далі побачив, що в кожних трьох суміжних символах має бути як мінімум 1, що різниться від інших 2. Спробував через це вирішити задачу, але все одно не пройшло претест 2. Я не побачив тут якусь властивість.
