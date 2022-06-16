from deta import Deta
from utils import load_config


class DBApi:
    def __init__(self):
        secret_cfg = load_config("configs/secrets.toml")["db"]
        self._deta = Deta(secret_cfg["project_key"])
        self._db = self._deta.Base(secret_cfg["db_name"])

    def get(self, s: str):
        return self._db.get(s)["url"]

    def insert(self, key: str, s: str):
        self._db.put({
            "url": s,
            "key": key,
        })
