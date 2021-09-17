# The Perfect Sudoku
This is a script pack that allows you to play sudoku game using powerstones.

Note: due to the script being made in an early version of the game, it is missing features/stuffs, has an absurd export text size, and bugs may occur.

If you feel like you found a bug, please **don't** message me, as I no longer want to support this pack anymore.

## Requirements
1. **16:9** aspect ratio and dynamic ui off.
2. 16 scripts and 22 max line in facility ai.
3. 89 powerstone slots, with 9 of each kind of stone inside.
4. Don't leave empty slots in equipped powerstone slots, and no powerstone left in inventory.

## How to play
The default impulse is `7`, which is the only impulse of the script pack.

Note: `Select xxx` below means `Hover your mouse over xxx, then press the impulse`.

`Select powerstone slot` **=>** `Remove the element from the slot`

`Select element except neutral` **->** `Select powerstone slot` **=>** `Write the element on the slot`

`Select neutral element` **=>** `Toggle powerstone flashing(useful to see which slots are empty)`

`Select white resource` **=>** `Start the checking script`

## Global variable display
This script tries to use as fewer global variables as possible. Here are the meanings of the given global variables:

`rules`: Inital rule amount, set this in `sudoku main` script.

`victory`: Victory or not. Simple to understand.

`statuscur`: Status of the slot under cursor. Should be a 5-digit number like `1XYSC`.

> `X` and `Y` are slot coords.
> 
> `S` is slot status(`0`=empty slot, `1`=filled slot, `2`=inital filled slot).
> 
> `C` is powerstone color id, starting from 1 to 9 following the order of the element bonus in museum.

`status?`: 10-digit Slot Status of the entire grid. First digit is always 1, other digits follow the slot status rule.

## Script list
