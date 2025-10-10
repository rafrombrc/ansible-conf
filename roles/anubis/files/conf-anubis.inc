# /etc/nginx/conf.d/conf-anubis.inc

# Forward to anubis
location / {
	proxy_set_header Host $host;
	proxy_set_header X-Real-IP $remote_addr;
	proxy_set_header Upgrade $http_upgrade;
	proxy_set_header Connection "upgrade";
	proxy_pass http://anubis;
}

location /robots.txt {
	root /var/www;
}
