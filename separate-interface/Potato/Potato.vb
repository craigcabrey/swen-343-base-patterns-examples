Namespace Swen.Vegetable

Imports Swen.Vegetable.Veggie

Public Class Potato
        Implements Swen.Veggie.Veggie

        Public Sub Grow()
                Console.WriteLine("Potato grew!")
        End Sub

        Public Sub BeEaten()
                Console.WriteLine("Potato was eaten!")
        End Sub
End Class
