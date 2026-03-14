# Site pour le tournoi de hanamikoji

Utilisation de django pour la création du site

## Utilisation pour tester le site localement

Dans un environnement virtuel (ou pas), dans un terminal, écrivez :

### Dépendances

- Python 3.11
- pip
- [isolate](https://github.com/ioi/isolate)

### Installation

```
git clone https://github.com/AntoninLoubiere/hanamikoji-site
cd hanamikoji-site/website
pip install django django_q daphne
pip install -U 'channels[daphne]'
```

### Configuration

Création de la base de données

```sh
python manage.py migrate
```

### Lancement

Lancer dans deux terminals :

```sh
python manage.py runserver
```

et dans le deuxième:

```sh
python manage.py qcluster
```

Le site s’exécute à l'adresse <http://127.0.0.1:8000/>.

### Déploiement

Déployer /static/documentation sur l'URL /documentation.

Quand lancé avec `python manage.py runserver`. La documentation se trouve sur /static/documentation.

Vous pouvez ensuite déployer le site avec Ngnix ou Apache avec un reverse proxy.

## Déploiement via Docker

Il est possible de déployer le site directement via Docker. Assurez-vous d'avoir Docker et Docker Compose installés, puis exécutez la commande suivante à la racine du projet :

1. Créez votre fichier d'environnement à partir de l'exemple :

```sh
cp .env.example .env
```

2. Adaptez les variables sensibles dans `.env` (`DJANGO_SECRET_KEY`, `DJANGO_SUPERUSER_PASSWORD`, `DJANGO_ALLOWED_HOSTS`, etc.).
	`DJANGO_ENV` accepte `developpement` ou `production`.
	`DJANGO_DEBUG` accepte `True` ou `False`.
	Pour PostgreSQL en production, mettez `DJANGO_ENV=production` et configurez `DB_NAME`, `DB_USER`, `DB_PASSWORD`, `DB_HOST`, `DB_PORT`.

3. Démarrez les services :

```sh
docker compose up -d
```
