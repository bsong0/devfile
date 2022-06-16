import requests

import utils

class MsApi:
    def __init__(self):
        mscfg_src = utils.load_config("configs/secrets.toml")["msapi"]
        params = {
            "redirect_uri": "http://localhost",
            "grant_type" : "authorization_code",
            "client_secret": mscfg_src["client_secret"],
            "client_id": mscfg_src["client_id"],
            "scope": ""
        }
        requests.get(
            "https://login.microsoftonline.com/common/oauth2/v2.0/token",

        )

    def _get_token(self):
