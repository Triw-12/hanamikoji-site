# Generated by Django 4.2.3 on 2023-07-07 20:42

from django.db import migrations


class Migration(migrations.Migration):

    dependencies = [
        ('game', '0001_initial'),
    ]

    operations = [
        migrations.RenameField(
            model_name='champions',
            old_name='titre',
            new_name='nom',
        ),
    ]
