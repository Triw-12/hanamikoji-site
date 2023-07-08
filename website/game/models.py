from django.db import models
from django.conf import settings

class Champion(models.Model):
    code = models.FileField()
    nom = models.CharField(max_length=128, blank=False)
    uploader = models.ForeignKey(settings.AUTH_USER_MODEL, on_delete=models.CASCADE)
    date = models.DateTimeField(auto_now_add=True)

    def __str__(self):
        return f'{self.nom}'

class Match(models.Model):
    id_match = models.AutoField(primary_key=True)
    champion1 = models.ForeignKey(Champion, on_delete=models.CASCADE, related_name='champion1')
    champion2 = models.ForeignKey(Champion, on_delete=models.CASCADE, related_name='champion2')
    gagnant = models.BooleanField(null=True)

    def __str__(self) -> str:
        return f"Match #{self.id_match} {self.champion1} vs {self.champion2}"